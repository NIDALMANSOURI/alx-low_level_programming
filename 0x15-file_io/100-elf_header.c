#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic - prints bytes
 * @h: ELF header struct
 */
void print_magic(Elf64_Ehdr h)
{
	int c;

	printf("  Magic:  ");
	for (c = 0; c < EI_NIDENT; c++)
		printf("%2.2x%s", h.e_ident[c], c == EI_NIDENT - 1 ? "\n" : " ");
}

