#ifndef _KERNEL_LOADER
#define _KERNEL_LOADER

/**
 * Load GDT from gdtr and complete protected mode. This function defined in asm source code.
 * 
 * @param gdtr Pointer to already defined & initialized GDTR
 * @warning Invalid address / definition of GDT will cause bootloop after calling this function.
 */
extern void load_gdt(struct GDTR *gdtr);

#endif