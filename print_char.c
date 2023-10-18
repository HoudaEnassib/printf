#include "main.h"

/**
 * print_char - This function prints a character.
 * @args: A pointer to the character to be printed.
 * Return: The number of characters printed (always 1 in this case).
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
