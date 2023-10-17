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

	return (count);
}

/**
 * _put_intnbr - Custom function to write an integer to the standard output.
 * @n: The integer to be written.
 *
 * Return: The number of characters written.
 */

int	_put_intnbr(int n)
{
	int count;
	long num;

	count = 0;
	num = n;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		count++;
	}
	if (num > -1 && num < 10)
		_putchar(num + '0');
	if (num == 0)
		return (1);
	if (num > 9)
	{
		_put_intnbr(num / 10);
		_put_intnbr(num % 10);
	}
	count += count_int(num);

	return (count);
}

/**
 * _put_unint - Custom function to write an unsigned integer to the standard output.
 * @n: The unsigned integer to be written.
 *
 * Return: The number of characters written.
 */

int	_put_unint(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		_putchar((n + '0'));
	if (n > 9)
	{
		_put_unint(n / 10);
		_put_unint(n % 10);
	}
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}
