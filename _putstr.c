#include "main.h"

/**
 * _putstr - Custom function to write a string to the standard output.
 * @s: The string to be written.
 *
 * Return: The number of characters written (excluding the null-terminator).
 */

int _putstr(char *s)
{
	int i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
		i += _putchar(s[i]);
	return (i);
}
