#include "main.h"

/**
 * print_unsigned - This function prints an unsigned integer.
 *
 * @ar: A pointer to the unsigned integer to be printed.
 *
 * Return: The number of digits printed.
 */

int print_unsigned(va_list ar)
{
	unsigned int n = va_arg(ar, unsigned int);

	return (print_number(n));
}
