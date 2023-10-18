#include "main.h"

/**
 * print_number - Outputs an integer value.
 *
 * @value: The integer to be printed.
 *
 * Return: The count of digits in the printed integer.
 */

int print_number(unsigned int value)
{
	int power = 1, len = 0;

	while ((value / power) > 9)
		power *= 10;

	while (power > 0)
	{
		len += _putchar('0' + value / power);
		value %= power;
		power /= 10;
	}

	return (len);
}


/**
 * print_string - Displays a string.
 *
 * @str: The string to be displayed.
 *
 * Return: The count of characters displayed.
 */

int print_string(char *str)
{
	int len = 0;

	while (*str)
	{
		len += _putchar(*str);
		str++;
	}
	return (len);
}

/**
 * print_binary - Outputs a value in binary format through recursive calls.
 *
 * @value: The value to be printed in binary.
 *
 * Return: The count of binary digits displayed.
 */

int print_binary(unsigned int value)
{
	int count = 0;

	if (value == 0)
	{
		return (0);
	}
	else
	{
		count += print_binary(value / 2);
		count += _putchar((value % 2) + '0');
	}

	return (count);
}


/**
 * print_hexadecimal - Outputs a value in hexadecimal
 * format (always 2 characters) with options.
 *
 * @value: The value to be printed in hexadecimal.
 * @prefix: A flag indicating whether
 * to include the '0' prefix (0 = no, 1 = yes).
 * @caps: A flag indicating whether uppercase
 * characters should be used (0 = no, 1 = yes).
 *
 * Return: The count of hexadecimal digits displayed.
 */

int print_hexadecimal(unsigned long int value, int prefix, int caps)
{
	int count = 0;

	if (value < 16)
	{
		if (!prefix)
			count += _putchar('0');
		if (value < 10)
			count += _putchar(value + '0');
		else
			count += caps ?
				_putchar((value - 10) + 'A') : _putchar((value - 10) + 'a');
	}
	else
	{
		prefix = 1;
		count += print_hexadecimal((value / 16), prefix, caps);
		count += print_hexadecimal((value % 16), prefix, caps);
	}

	return (count);
}


/**
 * print_octal - Outputs a value in octal format through a recursive process.
 *
 * @value: The value to be printed in octal.
 *
 * Return: The count of octal digits displayed.
 */

int print_octal(unsigned int value)
{
	int count = 0;

	if (value < 8)
	{
		count += _putchar(value + '0');
	}
	else
	{
		count += print_octal((value / 8));
		count += _putchar((value % 8) + '0');
	}

	return (count);
}
