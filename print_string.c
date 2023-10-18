#include "main.h"

/**
 * print_string - Print a string.
 * @args: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
