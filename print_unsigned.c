#include "main.h"
/**
 * print_unsigned - This function prints an unsigned integer.
 *
 * @args: A pointer to the unsigned integer to be printed.
 *
 * Return: The number of digits printed.
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_number(num));
}
