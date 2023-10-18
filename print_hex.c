#include "main.h"

/**
 * print_hex - Prints a number in lowercase hexadecimal (base 16) format.
 *
 * @ar: A pointer to the number to be printed in lowercase hexadecimal.
 *
 * Return: The number of characters printed.
 */

int print_hex(va_list ar)
{
	unsigned int n = va_arg(ar, unsigned int);

	if (!n)
		return (_putchar('0'));

	return (print_hexadecimal(n, 0, 0));
}
