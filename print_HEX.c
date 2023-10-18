#include "main.h"

/**
 * print_HEX - Prints a number in uppercase hexadecimal (base 16) format.
 *
 * @ar: A pointer to the number to be printed in uppercase hexadecimal.
 *
 * Return: The number of characters printed.
 */

int print_HEX(va_list ar)
{
	unsigned int n = va_arg(ar, unsigned int);

	if (!n)
		return (_putchar('0'));

	return (print_hexadecimal(n, 0, 1));
}
