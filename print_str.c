#include "main.h"

/**
 * print_str - This function prints a string.
 *
 * @args: A pointer to the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		return (print_string("(null)"));
	return (print_string(str));
}
