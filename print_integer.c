#include "main.h"
/**
 *  print_integer - Print int.
 *  @args: A va_list containing the integer to be printed.
 *
 *  Return: The number of characters printed.
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_number(n);

	return (n);
}
