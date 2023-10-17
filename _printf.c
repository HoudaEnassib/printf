#include "main.h"

/**
 * _printf - Custom implementation of the printf function for formatted output.
 * @s: The format string.
 * @...: Variable number of arguments based on the format.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *s, ...)
{
	va_list	a_ptr;
	int i_printed;
	int i;

	i_printed = 0;
	i = 0;
	va_start(a_ptr, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i_printed += task_distributor(a_ptr, s[i + 1]);
			i += 2;
		}
		if (s[i] != '%' && s[i])
			i_printed += _putchar(s[i++]);
	}
	return (i_printed);
}
