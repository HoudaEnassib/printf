#include "main.h"

/**
 * print_int - prints an integer
 *
 * @args: argument pointer
 *
 * Return: number of digits printed
 */

int print_int(va_list args)
{
	int value = va_arg(args, int);
	int len = 0;

	if (value < 0)
	{
		len += _putchar('-');
		value *= -1;
	}

	return (len + print_number((unsigned int)value));
}
