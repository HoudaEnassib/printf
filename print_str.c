#include "main.h"

/**
 * print_STR - Prints a string, replacing non-printable characters with hexadecimal representation.
 *
 * @args: A pointer to the string to be printed with non-printable characters replaced.
 *
 * Return: The number of characters printed.
 */

int print_STR(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (!str)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_hexadecimal(str[i], 0, 1);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}

	return (count);
}

