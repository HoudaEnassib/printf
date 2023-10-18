#include "main.h"

/**
 * print_reverse:  prints a string in reverse
 *
 * @args: argument pointer
 *
 * Return: number of characters printed
 */

int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0, count = 0;

	if (!str)
		return (-1);

	while (*str)
	{
		str++;
		len++;
	}

	while (len > 0)
	{
		str--;
		count += _putchar(*str);
		len--;
	}

	return (count);
}

