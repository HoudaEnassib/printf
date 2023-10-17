#include "main.h"

/**
 * print_rot13 - prints a string in rot13 format
 * @args: argument pointer
 * Return: number of characters printed
 */

int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (!str)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
			(str[i] >= 'A' && str[i] <= 'M'))
		{
			count += _putchar(str[i] + 13);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
			(str[i] >= 'N' && str[i] <= 'Z'))
		{
			count += _putchar(str[i] - 13);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}

	return (count);
}
