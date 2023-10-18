#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @ar: argument pointer
 *
 * Return: number of characters printed
 */

int print_rev(va_list ar)
{
	char *s = va_arg(ar, char *);
	int l = 0, c = 0;

	if (!s)
		return (-1);

	while (*s)
	{
		s++;
		l++;
	}

	while (l > 0)
	{
		s--;
		c += _putchar(*s);
		l--;
	}

	return (c);
}
