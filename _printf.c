#include "main.h"

/**
 * _printf - Custom printf function that prints
 * formatted text to the standard output.
 *
 * @format: The format string containing format specifiers.
 * @...: The optional arguments that correspond to the format specifiers.
 *
 * Return: The number of characters printed (excluding the null-terminator).
 */

int _printf(const char *format, ...)
{

	va_list args;
	int count = 0;
	int i = 0;
	int index;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			index = get_format_index(format[i]);
			if (index == -1)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
			{
				count += print_funcs[index].f(args);
			}
		}
	}

	va_end(args);

	return (count);
}
