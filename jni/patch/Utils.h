#ifndef UTILS_H
#define UTILS_H

#include <jni.h>
#include <unistd.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include "Logger.h"
#include "obfuscate.h"

// 64-bit addresses ko handle karne ke liye uintptr_t sabse safe hai
typedef uintptr_t ADDR; 
static ADDR globalLibBase = 0;
static bool libLoaded = false;

/* * FIXED: Library search engine ab 64-bit safe hai.
 * strtoull ka use kiya gaya hai taaki bade hex addresses load ho sakein.
 */
ADDR findLibrary(const char *library) {
    char buffer[1024] = {0};
    FILE *fp = fopen(OBFUSCATE("/proc/self/maps"), OBFUSCATE("rt"));
    if (fp == NULL) return 0;

    ADDR address = 0;
    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strstr(buffer, library)) {
            // strtoull 64-bit hex strings ko handle karta hai
            address = (ADDR)strtoull(buffer, NULL, 16);
            break;
        }
    }
    fclose(fp);
    return address;
}

/* * FIXED: Ye function ab absolute address return karega.
 * Base address ko cache kiya gaya hai taaki bar-bar maps scan na ho (Stealth).
 */
ADDR getAbsoluteAddress(const char *libraryName, ADDR relativeAddr) {
    if (globalLibBase == 0) {
        globalLibBase = findLibrary(libraryName);
    }
    if (globalLibBase == 0) return 0;
    
    // 64-bit pointer math
    return (globalLibBase + relativeAddr);
}

// Check if library is present in memory
bool isLibraryLoaded(const char *libraryName) {
    if (libLoaded) return true;
    ADDR addr = findLibrary(libraryName);
    if (addr != 0) {
        libLoaded = true;
        return true;
    }
    return false;
}

/* * FIXED: Offset conversion ab 64-bit architectures ke liye optimized hai.
 */
uintptr_t string2Offset(const char *c) {
    if (c == NULL) return 0;
    // base 16 (hex) conversion for 64-bit offsets
    return (uintptr_t)strtoull(c, nullptr, 16);
}

namespace ToastLength {
    inline const int LENGTH_LONG = 1;
    inline const int LENGTH_SHORT = 0;
}

#endif // UTILS_H

