#include "main.h"

/**
 * print_str - This function prints a string.
 *
 * @ar: A pointer to the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_str(va_list ar)
{
	char *s = va_arg(ar, char *);

	if (!s)
		return (print_string("(null)"));
	return (print_string(s));
}
