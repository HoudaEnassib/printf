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

/* _putchar.c */
int _putchar(char);

/* _printf */
int _printf(const char *, ...);
int printer(const char *, form_spec *, va_list);

/* specifier functions */
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_unsigned(va_list);
int print_bin(va_list);
int print_rev(va_list);
int print_rot13(va_list);
int print_STR(va_list);
int print_addr(va_list);
int print_oct(va_list);
int print_hex(va_list);
int print_HEX(va_list);

/* helper functions */
int print_string(char *);
int print_binary(unsigned int);
int print_number(unsigned int);
int print_hexadecimal(unsigned long int, int, int);
int print_octal(unsigned int);

/* specifier handlers / extras */

#endif
