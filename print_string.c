#include "main.h"
/**
 * print_string - Print a string.
 * @args: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		return (write(1, "(null)", 6));

	return (write(1, str, _strlen(str)));
}
