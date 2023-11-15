#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int printChar(va_list content);
int printString(va_list content);
int _strlen(char *s);
int _strlen_c(const char *s);
int percentage_print(void);
int print_de(va_list args);
int print_num(va_list args);
int binary_printf(va_list content);
int print_pos(va_list args);
int print_octal(va_list val);
int print_hexd(va_list val);
int print_HEXD(va_list val);
int print_hextra(unsigned int dig);
int print_strex(val_list val);

#endif
