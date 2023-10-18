#include "main.h"

/**
 * print_STR - Prints a string, replacing non-printable
 * characters with hexadecimal representation.
 *
 * @ar: A pointer to the string to be printed with
 * non-printable characters replaced.
 *
 * Return: The number of characters printed.
 */

int print_STR(va_list ar)
{
	char *s = va_arg(ar, char *);
	int i, c = 0;

	if (!s)
		return (-1);

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			c += _putchar('\\');
			c += _putchar('x');
			c += print_hexadecimal(s[i], 0, 1);
		}
		else
		{
			c += _putchar(s[i]);
		}
	}

	return (c);
}
