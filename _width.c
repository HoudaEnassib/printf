#include "main.h"
#include <stdbool.h>

/**
 * _width - Determines the printing width to be used in the format string.
 *
 * @format: The formatted string where arguments will be printed.
 * @i: Pointer to the current position in the format string.
 * @list: List of arguments.
 *
 * Return: The calculated width for printing.
 */


int _width(const char *format, int *i, va_list list)
{
	int w = 0;
	bool width_f = false;

	while (format[*i] != '\0')
	{
		if (_digit(format[*i]))
		{
			w *= 10;
			w += format[*i] - '0';
			width_f = true;
		}
		else if (format[*i] == '*')
		{
			w = va_arg(list, int);
			width_f = true;
		}
		else if (width_f)
		{
			break;
		}
		(*i)++;
	}

	return (w);
}
