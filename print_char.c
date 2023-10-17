#include "main.h"

/**
 * print_char - Print a character.
 * @args: A va_list containing the character to be printed.
 *
 * Return: The number of characters printed (1).
 */

int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
