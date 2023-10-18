#include "main.h"

/**
 * print_reverse - takes a pointer to a string
 * and prints the string in reverse order.
 *
 * @args: Pointer to the string to be printed in reverse.
 *
 * Return: The number of characters printed.
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

