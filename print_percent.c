#include "main.h"

/**
 * print_percent - Print a percent character ("%").
 * @args: A va_list, not used in this function.
 *
 * Return: The number of characters printed (1).
 */

int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
