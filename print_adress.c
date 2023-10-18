#include "main.h"

/**
 * print_addr - Prints a memory address in hexadecimal format.
 *
 * @args: A pointer to the memory address to be printed.
 *
 * Return: The number of characters printed.
 */

int print_addr(va_list args)
{
	unsigned long int value = va_arg(args, unsigned long int);
	int count = 0;


	if (!value)
	{
		return (print_string("(nil)"));
	}

	count += print_string("0x");
	count += print_hexadecimal(value, 1, 0);

	return (count);
}
