#include "main.h"

/**
 * task_distributor - Distribute and execute
 * tasks based on the format specifier.
 *
 * @ap: The va_list containing the arguments.
 * @c: The format specifier character.
 *
 * Return: The number of characters printed by the executed task.
 */

int task_distributor(va_list ap, char c)
{
	int counter;

	counter = 0;
	if (c == 'c')
		counter += _putchar(va_arg(ap, int));
	else if (c == 's')
		counter += _putstr(va_arg(ap, char *));
	else if (c == 'p')
		counter += _putaddress(va_arg(ap, void *));
	else if (c == 'd' || c == 'i')
		counter += _put_intnbr(va_arg(ap, int));
	else if (c == 'u')
		counter += _put_unint(va_arg(ap, unsigned int));
	else if (c == 'x')
		counter += _put_hex(va_arg(ap, unsigned int), 0);
	else if (c == 'X')
		counter += _put_hex(va_arg(ap, unsigned int), 1);
	else if (c == '%')
		counter += _putchar('%');
	else
		counter++;
	return (counter);
}
