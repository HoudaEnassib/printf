#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_func - struct for format specifiers
 * @spec: The format specifier
 * @f: The function to handle the specifier
 */

typedef struct print_func
{
	char spec;
	int (*f)(va_list args);
}
print_func_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_pointer(va_list args);
int print_string_upper(va_list args);
int print_reverse(va_list args);
int print_rot13(va_list args);
int _strlen(char *str);
void print_number(int n);

#endif
