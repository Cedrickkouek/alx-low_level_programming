#include "main.h"
/**
 * main - printf header of elf file
 * @argc: number of arguments parsed
 * @argv: array of arguments parsed
 * Return: 98, 99 or 0;
 */
int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(98);
  }

  FILE *fp = fopen(argv[1], "r");
  if (fp == NULL)
  {
    perror("fopen");
    exit(98);
  }

  int ret = lseek(fileno(fp), 0, SEEK_SET);
  if (ret == -1)
  {
    perror("lseek");
    exit(98);
  }

  Elf64_Ehdr elf_header;
  size_t bytes_read = read(fileno(fp), &elf_header, sizeof(elf_header));
  if (bytes_read != sizeof(elf_header))
  {
    perror("read");
    exit(98);
  }

  if (elf_header.e_ident[EI_MAG0] != 0x7f ||
      elf_header.e_ident[EI_MAG1] != 'E' ||
      elf_header.e_ident[EI_MAG2] != 'L' ||
      elf_header.e_ident[EI_MAG3] != 'F')
  {
    fprintf(stderr, "Not an ELF file\n");
    exit(98);
  }

  printf("Magic: %c%c%c%c\n", elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1], elf_header.e_ident[EIelf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
  printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
  printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
  printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
  printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
  printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
  printf("Type: %d\n", elf_header.e_type);
  printf("Entry point address: %lx\n", elf_header.e_entry);

  fclose(fp);
  return (0);
}
