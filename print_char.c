#include "main.h"

/**
 * print_char - This function prints a character.
 *
 * @ar: A pointer to the character to be printed.
 *
 * Return: The number of characters printed (always 1 in this case).
 */

int print_char(va_list ar)
{
	char c = va_arg(ar, int);

	return (_putchar(c));
}
