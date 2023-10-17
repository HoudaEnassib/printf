#include "main.h"

/**
 * get_format_index - Find the index of a format
 * specifier in the print_funcs array.
 *
 * @c: The format specifier character to search for.
 *
 * Return: The index of the format specifier in the print_funcs array.
 */

int get_format_index(char c)
{
	int i = 0;

	while (print_funcs[i].spec)
	{
		if (print_funcs[i].spec == c)
			return (i);
		i++;
	}

	return (-1);
}
