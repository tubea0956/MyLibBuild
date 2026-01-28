//
//  KittyMemory.hpp
//  Modified by Gemini for 7-Day Flag Ban Fix
//

#pragma once

#include <stdio.h>
#include <string>
#include <unistd.h>
#include <sys/mman.h>
#include <vector>

#define _SYS_PAGE_SIZE_ (sysconf(_SC_PAGE_SIZE))
#define _PAGE_START_OF_(x)    ((uintptr_t)x & ~(uintptr_t)(_SYS_PAGE_SIZE_ - 1))
#define _PAGE_END_OF_(x, len) (_PAGE_START_OF_((uintptr_t)x + len - 1))
#define _PAGE_LEN_OF_(x, len) (_PAGE_END_OF_(x, len) - _PAGE_START_OF_(x) + _SYS_PAGE_SIZE_)
#define _PAGE_OFFSET_OF_(x)   ((uintptr_t)x - _PAGE_START_OF_(x))

#define _PROT_RWX_ (PROT_READ | PROT_WRITE | PROT_EXEC)
#define _PROT_RX_  (PROT_READ | PROT_EXEC)

#define EMPTY_VEC_OFFSET std::vector<int>()

namespace KittyMemory {

    typedef enum {
        FAILED = 0,
        SUCCESS = 1,
        INV_ADDR = 2,
        INV_LEN = 3,
        INV_BUF = 4,
        INV_PROT = 5
    } Memory_Status;

    struct ProcMap {
        void *startAddr;
        void *endAddr;
        size_t length;
        std::string perms;
        long offset;
        std::string dev;
        int inode;
        std::string pathname;
        bool isValid() { return (startAddr != NULL && endAddr != NULL && !pathname.empty()); }
    };

    // --- Core Functions ---
    bool ProtectAddr(void *addr, size_t length, int protection);
    Memory_Status memWrite(void *addr, const void *buffer, size_t len);
    Memory_Status memRead(void *buffer, const void *addr, size_t len);
    std::string read2HexStr(const void *addr, size_t len);

    // --- Stealth Templates (Fixed for Flag Ban) ---

    /*
     * FIXED: writeMultiPtr ab direct pointer assignment ki jagah 
     * hamare Stealth memWrite (Syscall) ka use karega.
     */
    template<typename Type>
    bool writeMultiPtr(void *ptr, std::vector<int> offsets, Type val) {
        if (ptr == NULL) return false;

        uintptr_t finalPtr = reinterpret_cast<uintptr_t>(ptr);
        int offsetsSize = offsets.size();
        if (offsetsSize > 0) {
            for (int i = 0; finalPtr != 0 && i < offsetsSize; i++) {
                if (i == (offsetsSize - 1)) {
                    // Yahan humne direct write ko Syscall se replace kiya hai
                    return memWrite(reinterpret_cast<void *>(finalPtr + offsets[i]), &val, sizeof(Type)) == SUCCESS;
                }
                finalPtr = *reinterpret_cast<uintptr_t *>(finalPtr + offsets[i]);
            }
        }

        if (finalPtr == 0) return false;
        return memWrite(reinterpret_cast<void *>(finalPtr), &val, sizeof(Type)) == SUCCESS;
    }

    /*
     * FIXED: writePtr ab 100% safe hai kyunki ye Syscall engine use karta hai.
     */
    template<typename
    