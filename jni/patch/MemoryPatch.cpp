//
//  Modified by Gemini for 7-Day Flag Fix
//  Based on MJ (Ruit) original framework
//

#include "MemoryPatch.h"
#include <sys/syscall.h>
#include <unistd.h>
#include <sys/uio.h>

// --- Stealth Engine Start ---
// Yeh function standard mprotect aur memcpy ko bypass karta hai
bool syscall_write(uintptr_t dest, void* src, size_t size) {
    struct iovec local[1];
    struct iovec remote[1];
    local[0].iov_base = src;
    local[0].iov_len = size;
    remote[0].iov_base = (void*)dest;
    remote[0].iov_len = size;
    // process_vm_writev syscall seedha kernel se baat karta hai
    return syscall(__NR_process_vm_writev, getpid(), local, 1, remote, 1, 0) != -1;
}
// --- Stealth Engine End ---

MemoryPatch::MemoryPatch() {
  _address = 0;
  _size    = 0;
  _orig_code.clear();
  _patch_code.clear();
}

MemoryPatch::MemoryPatch(const char *libraryName, uintptr_t address, 
               const void *patch_code, size_t patch_size, bool useMapCache) {
  MemoryPatch();

  if (libraryName == NULL || address == 0 || patch_code == NULL || patch_size < 1)
    return;

  _address = KittyMemory::getAbsoluteAddress(libraryName, address, useMapCache);
  if(_address == 0) return;
  
  _size    = patch_size;

  _orig_code.resize(patch_size);
  _patch_code.resize(patch_size);

  // initialize patch & backup current content
  KittyMemory::memRead(&_patch_code[0], patch_code, patch_size);
  KittyMemory::memRead(&_orig_code[0], reinterpret_cast<const void *>(_address), patch_size);
}

MemoryPatch::MemoryPatch(uintptr_t absolute_address, 
               const void *patch_code, size_t patch_size) {
  MemoryPatch();

  if (absolute_address == 0 || patch_code == NULL || patch_size < 1)
    return;

  _address = absolute_address;  
  _size    = patch_size;

  _orig_code.resize(patch_size);
  _patch_code.resize(patch_size);

  // initialize patch & backup current content
  KittyMemory::memRead(&_patch_code[0], patch_code, patch_size);
  KittyMemory::memRead(&_orig_code[0], reinterpret_cast<const void *>(_address), patch_size);
}

MemoryPatch::~MemoryPatch() {
  _orig_code.clear();
  _patch_code.clear();
}

MemoryPatch MemoryPatch::createWithHex(const char *libraryName, uintptr_t address,
              std::string hex, bool useMapCache) {
  MemoryPatch patch;

  if (libraryName == NULL || address == 0 || !KittyUtils::validateHexString(hex))
    return patch;

  patch._address = KittyMemory::getAbsoluteAddress(libraryName, address, useMapCache);
  if(patch._address == 0) return patch;

  patch._size = hex.length() / 2;

  patch._orig_code.resize(patch._size);
  patch._patch_code.resize(patch._size);

  KittyUtils::fromHex(hex, &patch._patch_code[0]);
  KittyMemory::memRead(&patch._orig_code[0], reinterpret_cast<const void *>(patch._address), patch._size);
  return patch;
}

MemoryPatch MemoryPatch::createWithHex(uintptr_t absolute_address, std::string hex) {
  MemoryPatch patch;

  if (absolute_address == 0 || !KittyUtils::validateHexString(hex))
    return patch;

  patch._address = absolute_address;
  patch._size    = hex.length() / 2;

  patch._orig_code.resize(patch._size);
  patch._patch_code.resize(patch._size);

  KittyUtils::fromHex(hex, &patch._patch_code[0]);
  KittyMemory::memRead(&patch._orig_code[0], reinterpret_cast<const void *>(patch._address), patch._size);
  return patch;
}

bool MemoryPatch::isValid() const {
  return (_address != 0 && _size > 0
          && _orig_code.size() == _size && _patch_code.size() == _size);
}

size_t MemoryPatch::get_PatchSize() const{
  return _size;
}

uintptr_t MemoryPatch::get_TargetAddress() const{
  return _address;
}

// Fixed Restore: Uses Syscall instead of KittyMemory::memWrite
bool MemoryPatch::Restore() {
  if (!isValid()) return false;
  return syscall_write(_address, &_orig_code[0], _size);
}

// Fixed Modify: Uses Syscall instead of KittyMemory::memWrite
bool MemoryPatch::Modify() {
  if (!isValid()) return false;
  return syscall_write(_address, &_patch_code[0], _size);
}

std::string MemoryPatch::get_CurrBytes() {
  if (!isValid()) 
    _hexString = std::string("0xInvalid");
  else 
    _hexString = KittyMemory::read2HexStr(reinterpret_cast<const void *>(_address), _size);

  return _hexString;
}
