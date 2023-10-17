#include "main.h"

/**
 * print_bin - Prints an unsigned integer in binary format.
 *
 * @args: A pointer to the unsigned integer to be printed in binary.
 *
 * Return: The count of binary digits printed.
 */

int print_bin(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	if (value == 0)
	{
		return (_putchar('0'));
	}

	if (value == 1)
	{
		return (_putchar('1'));
	}
	else
	{
		return (print_binary(value));
	}
}
