#include "main.h"
#include <unistd.h>

/**
 * _putchar - Custom function to write a character to the standard output.
 * @c: The character to be written.
 *
 * Return: On success, returns the number of
 * characters written (1). On error, -1.
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
