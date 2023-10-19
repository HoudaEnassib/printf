#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct format_spec - defines a structure for symbols and functions
 *
 * @c: The associated character
 * @f: The associated function
 */

typedef struct format_spec
{
	char *c;
	int (*f)(va_list);
} form_spec;


int _putchar(char c);

int _printf(const char *format, ...);
int printer(const char *format, form_spec specifiers[], va_list ar);

int print_char(va_list ar);
int print_str(va_list ar);
int print_percent(__attribute__((unused))va_list ar);
int print_int(va_list ar);
int print_unsigned(va_list ar);
int print_bin(va_list ar);
int print_rev(va_list ar);
int print_rot13(va_list ar);
int print_STR(va_list ar);
int print_addr(va_list ar);
int print_oct(va_list ar);
int print_hex(va_list ar);
int print_HEX(va_list ar);

int print_string(char *s);
int print_binary(unsigned int vl);
int print_number(unsigned int vl);
int print_hexadecimal(unsigned long int vl, int pr, int cp);
int print_octal(unsigned int vl);

#endif
