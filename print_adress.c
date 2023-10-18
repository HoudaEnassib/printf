#include "main.h"

/**
 * print_addr - Prints a memory address in hexadecimal format.
 *
 * @ar: A pointer to the memory address to be printed.
 *
 * Return: The number of characters printed.
 */

int print_addr(va_list ar)
{
	unsigned long int vl = va_arg(ar, unsigned long int);
	int c = 0;

	if (!vl)
	{
		return (print_string("(nil)"));
	}

	c += print_string("0x");
	c += print_hexadecimal(vl, 1, 0);

	return (c);
}
