#include "main.h"

/**
 * count_int - Count the number of digits in an integer.
 * @num: The integer for which to count digits.
 *
 * Return: The number of digits in the integer.
 */

static int	count_int(long num)
{
	int	count;

	count = 0;
	while (num)
	{
		count++;
		num /= 10;
	}
	return (count);
}
