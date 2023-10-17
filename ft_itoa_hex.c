#include "main.h"

/**
 * len_calculator - Calculate the length of a hexadecimal representation.
 * @n: The hexadecimal number.
 *
 * Return: The length of the hexadecimal representation.
 */

static int	len_calculator(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

