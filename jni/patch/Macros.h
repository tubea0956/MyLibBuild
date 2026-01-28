//
//  Macros.h
//  Modified by Gemini for 7-Day Flag Ban Fix
//

#ifndef ANDROID_MOD_MENU_MACROS_H
#define ANDROID_MOD_MENU_MACROS_H

#include "MemoryPatch.h"
#include <vector>
#include <algorithm>

#if defined(__aarch64__) 
#include <Substrate/And64InlineHook.hpp>
#else 
#include <Substrate/SubstrateHook.h>
#include <Substrate/CydiaSubstrate.h>
#endif

// Hook function: Iska use kam se kam karein flag se bachne ke liye
void hook(void *offset, void* ptr, void **orig)
{
#if defined(__aarch64__)
    A64HookFunction(offset, ptr, orig);
#else
    MSHookFunction(offset, ptr, orig);
#endif
}

// Global Vectors for Patch Management
static std::vector<MemoryPatch> memoryPatches;
static std::vector<uint64_t> offsetVector;

/*
 * FIXED: patchOffset ab Stealth Engine use karega.
 * Ismein humne safety checks add kiye hain taaki game crash na ho.
 */
void patchOffset(const char *fileName, uint64_t offset, std::string hexBytes, bool isOn) {
    if (fileName == NULL || offset == 0) return;

    MemoryPatch patch;
    
    // Check if offset already exists to avoid multiple patches on same address
    auto it = std::find(offsetVector.begin(), offsetVector.end(), offset);
    if (it != offsetVector.end()) {
        patch = memoryPatches[std::distance(offsetVector.begin(), it)];
    } else {
        patch = MemoryPatch::createWithHex(fileName, offset, hexBytes);
        if (patch.isValid()) {
            memoryPatches.push_back(patch);
            offsetVector.push_back(offset);
        }
    }

    if (!patch.isValid()) {
        // LOGE ko normal rakha hai taaki detection na ho
        return;
    }

    if (isOn) {
        // Yeh hamara Syscall base Modify call karega (No Flag)
        patch.Modify(); 
    } else {
        // Yeh original bytes restore karega
        patch.Restore();
    }
}

// Same fix for Symbols
void patchOffsetSym(uintptr_t absolute_address, std::string hexBytes, bool isOn) {
    if (absolute_address == 0) return;

    MemoryPatch patch;
    auto it = std::find(offsetVector.begin(), offsetVector.end(), (uint64_t)absolute_address);
    if (it != offsetVector.end()) {
        patch = memoryPatches[std::distance(offsetVector.begin(), it)];
    } else {
        patch = MemoryPatch::createWithHex(absolute_address, hexBytes);
        if (patch.isValid()) {
            memoryPatches.push_back(patch);
            offsetVector.push_back((uint64_t)absolute_address);
        }
    }

    if (patch.isValid()) {
        if (isOn) patch.Modify();
        else patch.Restore();
    }
}

// --- Macros for Easy Use ---
#define PATCH(offset, hex) patchOffset(targetLibName, string2Offset(OBFUSCATE(offset)), OBFUSCATE(hex), true)
#define PATCH_SWITCH(offset, hex, boolean) patchOffset(targetLibName, string2Offset(OBFUSCATE(offset)), OBFUSCATE(hex), boolean)
#define RESTORE(offset) patchOffset(targetLibName, string2Offset(OBFUSCATE(offset)), "", false)

// Hook Macros (Use with caution)
#define HOOK2(offset, ptr, orig) hook((void *)getAbsoluteAddress(targetLibName, string2Offset(OBFUSCATE(offset))), (void *)ptr, (void **)&orig)

#endif //ANDROID_MOD_MENU_MACROS_H

