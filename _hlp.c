#include "main.h"

/**
 * print_number - Outputs an integer value.
 *
 * @vl: The integer to be printed.
 *
 * Return: The count of digits in the printed integer.
 */

int print_number(unsigned int vl)
{
	int p = 1;
	int l = 0;

	while ((vl / p) > 9)
		p *= 10;

	while (p > 0)
	{
		l += _putchar('0' + vl / p);
		vl %= p;
		p /= 10;
	}

	return (l);
}

/**
 * print_string - Displays a string.
 *
 * @s: The string to be displayed.
 *
 * Return: The count of characters displayed.
 */

int print_string(char *s)
{
	int l = 0;

	while (*s)
	{
		l += _putchar(*s);
		s++;
	}
	return (l);
}

/**
 * print_binary - Outputs a value in binary format through recursive calls.
 *
 * @vl: The value to be printed in binary.
 *
 * Return: The count of binary digits displayed.
 */

int print_binary(unsigned int vl)
{
	int c = 0;

	if (vl == 0)
	{
		return (0);
	}
	else
	{
		c += print_binary(vl / 2);
		c += _putchar((vl % 2) + '0');
	}

	return (c);
}

/**
 * print_hexadecimal - Outputs a value in hexadecimal
 * format (always 2 characters) with options.
 *
 * @vl: The value to be printed in hexadecimal.
 * @pr: A flag indicating whether
 * to include the '0' prefix (0 = no, 1 = yes).
 * @cp: A flag indicating whether uppercase
 * characters should be used (0 = no, 1 = yes).
 *
 * Return: The count of hexadecimal digits displayed.
 */

int print_hexadecimal(unsigned long int vl, int pr, int cp)
{
	int c = 0;

	if (vl < 16)
	{
		if (!pr)
			c += _putchar('0');
		if (vl < 10)
			c += _putchar(vl + '0');
		else
			c += cp ?
				_putchar((vl - 10) + 'A') : _putchar((vl - 10) + 'a');
	}
	else
	{
		pr = 1;
		c += print_hexadecimal((vl / 16), pr, cp);
		c += print_hexadecimal((vl % 16), pr, cp);
	}

	return (c);
}

/**
 * print_octal - Outputs a value in octal format through a recursive process.
 *
 * @vl: The value to be printed in octal.
 *
 * Return: The count of octal digits displayed.
 */

int print_octal(unsigned int vl)
{
	int c = 0;

	if (vl < 8)
	{
		c += _putchar(vl + '0');
	}
	else
	{
		c += print_octal((vl / 8));
		c += _putchar((vl % 8) + '0');
	}

	return (c);
}
