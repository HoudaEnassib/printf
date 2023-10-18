#include "main.h"

/**
 * print_hex - Prints a number in lowercase hexadecimal (base 16) format.
 *
 * @args: A pointer to the number to be printed in lowercase hexadecimal.
 *
 * Return: The number of characters printed.
 */
int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	if (!num)
		return (_putchar('0'));

	return (print_hexadecimal(num, 0, 0));
}
