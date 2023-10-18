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
	int char_c = 0;

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
	va_list ar;

	if (!format)
		return (-1);

	va_start(ar, format);
	char_c = printer(format, specifiers, ar);
	va_end(ar);

	return (char_c);
}


/**
 * printer - Outputs data based on format specifiers and provided arguments.
 *
 * @format: A string containing format specifiers.
 * @specifiers: An array of format specifiers.
 * @ar: A list of arguments corresponding to the specifiers.
 *
 * Return: The count of characters printed.
 */

int printer(const char *format, form_spec specifiers[], va_list ar)
{
	int i = 0, j, char_c = 0, check;

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
					check = specifiers[j].f(ar);
					if (check == -1)
						return (-1);
					char_c += check;
					break;
				}
			}
			if (specifiers[j].c == NULL)
			{
				char_c += print_percent(ar);
				char_c += _putchar(format[i]);
			}
		}
		else
		{
			char_c += _putchar(format[i]);
		}
		i++;
	}

	return (char_c);
}
