#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void endPart(int src_fd, int dst_fd);
void print_elf_header(Elf64_Ehdr *header);

#endif
