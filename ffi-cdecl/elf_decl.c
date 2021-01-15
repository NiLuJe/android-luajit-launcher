// NOTE: Fix the typedefs manually, ffi-cdecl resolves those to the canonical type they point to, which makes it unstable across ABIs, unlike the original C99 names...
#include <elf.h>

#include "ffi-cdecl.h"

// Constants
cdecl_const(EI_CLASS)
cdecl_const(ELFCLASSNONE)
cdecl_const(ELFCLASS32)
cdecl_const(ELFCLASS64)

cdecl_const(SHT_STRTAB)
cdecl_const(SHT_DYNAMIC)

cdecl_const(DT_NEEDED)

// ELFCLASS32
cdecl_c99_type(Elf32_Half, uint16_t)
cdecl_c99_type(Elf32_Word, uint32_t)
cdecl_c99_type(Elf32_Sword, int32_t)

cdecl_c99_type(Elf32_Xword, uint64_t)
cdecl_c99_type(Elf32_Sxword, int64_t)

cdecl_c99_type(Elf32_Addr, uint32_t)

cdecl_c99_type(Elf32_Off, uint32_t)

cdecl_c99_type(Elf32_Section, uint16_t)

cdecl_c99_type(Elf32_Versym, Elf32_Half)

cdecl_type(Elf32_Ehdr)
cdecl_type(Elf32_Shdr)
cdecl_type(Elf32_Dyn)

// ELFCLASS64
