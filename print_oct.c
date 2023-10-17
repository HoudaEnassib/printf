#include "main.h"

/**
 * print_oct - Prints a number in octal (base 8) format.
 *
 * @args: A pointer to the number to be printed in octal.
 *
 * Return: The number of characters printed.
 */
int print_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_octal(num));
}
