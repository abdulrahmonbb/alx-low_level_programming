#ifndef MAIN_H
#define MAIN_H

#define BUF_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void display_elf_header_info(const Elf64_Ehdr *elf_header);

#endif
