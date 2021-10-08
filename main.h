#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* struct steps - structure created
* @spec: chooses a specifier from array of structure
*
* @f: function pointer
*/
typedef struct steps
{
char *spec;
int (*f)(va_list arg);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int entry_printf(specifier sp[], const char *format, va_list arg);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_unsigned(va_list arg);
int print_integer(va_list arg);
int print_HEX(va_list arg);
int print_hex(va_list arg);
int print_octal(va_list arg);
int print_binary(va_list arg);
int len_buffer(unsigned int n, int base);
int print_rev(va_list arg);
int print_rot(va_list arg);
int print_the_string(va_list arg);
int print_the_HEX(char n);

#endif /* MAIN_H */
