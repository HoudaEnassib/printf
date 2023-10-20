#include "main.h"

/**
 * _digit - Verifies if a character is a digit.
 * @c: The character to be evaluated.
 *
 * Return: 1 if 'c' is a digit, 0 otherwise.
 */

int _digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
