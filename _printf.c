#include "main.h"

/**
 * _printf - Outputs formatted data based on the provided format string.
 *
 * @format: A string containing format specifiers and optional arguments.
 *
 * Return: The count of characters printed.
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	form_spec specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"r", print_rev},
		{"R", print_rot13},
		{"S", print_STR},
		{"p", print_addr},
		{"u", print_unsigned},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{NULL, NULL}
	};
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	char_count = printer(format, specifiers, args);
	va_end(args);

	return (char_count);
}


/**
 * printer - Outputs data based on format specifiers and provided arguments.
 *
 * @format: A string containing format specifiers.
 * @specifiers: An array of format specifiers.
 * @args: A list of arguments corresponding to the specifiers.
 *
 * Return: The count of characters printed.
 */
int printer(const char *format, form_spec specifiers[], va_list args)
{
	int i = 0, j, char_count = 0, checker;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			for (j = 0; specifiers[j].c != NULL; j++)
			{
				if (format[i] == specifiers[j].c[0])
				{
					checker = specifiers[j].f(args);
					if (checker == -1)
						return (-1);
					char_count += checker;
					break;
				}
			}
			if (specifiers[j].c == NULL)
			{
				char_count += print_percent(args);
				char_count += _putchar(format[i]);
			}
		}
		else
		{
			char_count += _putchar(format[i]);
		}
		i++;
	}

	return (char_count);
}
