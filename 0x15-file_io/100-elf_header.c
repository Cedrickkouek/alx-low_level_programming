#include "main.h"

/**
 *print_elf_header -  the print_elf_header function
 *@header: arg1
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
	header->e_ident[EI_CLASS] == ELFCLASS32 ?
	"ELF32" : "ELF64");  printf("  Data:                              %s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            UNIX - System V\n");
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_OSABI]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               0x%lx\n",
			header->e_entry);
}

/**
 *main - printf header of elf file
 *@argc: number of arguments parsed
 *@argv: array of arguments parsed
 *Return: 98, 99 or 0;
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		perror("Error opening file");
		exit(98);
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1]
			!= ELFMAG1 || header.e_ident[EI_MAG2]
			!= ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		exit(98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
