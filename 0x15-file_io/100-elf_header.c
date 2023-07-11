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
/**
 * print_class - print ELF class
 * @h: ELF header struct
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}


