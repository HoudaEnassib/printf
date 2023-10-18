#include "main.h"

/**
 * print_rot13 - prints a string in rot13 format
 *
 * @ar: argument pointer
 *
 * Return: number of characters printed
 */

int print_rot13(va_list ar)
{
	char *s = va_arg(ar, char *);
	int i, c = 0;

	if (!s)
		return (-1);

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') ||
			(s[i] >= 'A' && s[i] <= 'M'))
		{
			c += _putchar(s[i] + 13);
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') ||
			(s[i] >= 'N' && s[i] <= 'Z'))
		{
			c += _putchar(s[i] - 13);
		}
		else
		{
			c += _putchar(s[i]);
		}
	}

	return (c);
}
