#include "main.h"

/**
 * print_oct - Prints a number in octal (base 8) format.
 *
 * @ar: A pointer to the number to be printed in octal.
 *
 * Return: The number of characters printed.
 */

int print_oct(va_list ar)
{
	unsigned int n = va_arg(ar, unsigned int);

	return (print_octal(n));
}
