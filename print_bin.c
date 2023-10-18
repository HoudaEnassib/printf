#include "main.h"

/**
 * print_bin - Prints an unsigned integer in binary format.
 *
 * @ar: A pointer to the unsigned integer to be printed in binary.
 *
 * Return: The count of binary digits printed.
 */

int print_bin(va_list ar)
{
	unsigned int vl = va_arg(ar, unsigned int);

	if (vl == 0)
	{
		return (_putchar('0'));
	}

	if (vl == 1)
	{
		return (_putchar('1'));
	}
	else
	{
		return (print_binary(vl));
	}
}
