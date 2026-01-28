//
//  MemoryBackup.cpp (Stealth Version)
//  Fixed for Root/Lib bypass method
//

#include "MemoryBackup.h"

MemoryBackup::MemoryBackup() {
  _address = 0;
  _size    = 0;
  _orig_code.clear();
}

MemoryBackup::MemoryBackup(const char *libraryName, uintptr_t address, size_t backup_size, bool useMapCache) {
  _address = 0;
  _size    = 0;

  if (libraryName == NULL || address == 0 || backup_size < 1)
    return;

  _address = KittyMemory::getAbsoluteAddress(libraryName, address, useMapCache);
  if(_address == 0) return;
  
  _size = backup_size;
  _orig_code.resize(backup_size);

  // Backup bytes using stealth read
  KittyMemory::memRead(&_orig_code[0], reinterpret_cast<const void *>(_address), backup_size);
}

MemoryBackup::MemoryBackup(uintptr_t absolute_address, size_t backup_size) {
  _address = absolute_address;
  _size = backup_size;

  if (absolute_address == 0 || backup_size < 1)
    return;

  _orig_code.resize(backup_size);
  KittyMemory::memRead(&_orig_code[0], reinterpret_cast<const void *>(_address), backup_size);
}

MemoryBackup::~MemoryBackup() {
  _orig_code.clear();
}

bool MemoryBackup::isValid() const {
  return (_address != 0 && _size > 0 && _orig_code.size() == _size);
}

size_t MemoryBackup::get_BackupSize() const{
  return _size;
}

uintptr_t MemoryBackup::get_TargetAddress() const{
  return _address;
}

// FIXED: Restore ab hamara Stealth Syscall use karega
bool MemoryBackup::Restore() {
  if (!isValid()) return false;
  // Yeh KittyMemory::memWrite call karega jo ab Syscall based hai
  return KittyMemory::memWrite(reinterpret_cast<void *>(_address), &_orig_code[0], _size) == KittyMemory::SUCCESS;
}

std::string MemoryBackup::get_CurrBytes() {
  if (!isValid()) return "0xInv";
  return KittyMemory::read2HexStr(reinterpret_cast<const void *>(_address), _size);
}
