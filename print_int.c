#include "main.h"

/**
 * print_int - prints an integer
 *
 * @ar: argument pointer
 *
 * Return: number of digits printed
 */

int print_int(va_list ar)
{
	int vl = va_arg(ar, int);
	int l = 0;

	if (vl < 0)
	{
		l += _putchar('-');
		vl *= -1;
	}

	return (l + print_number((unsigned int)vl));
}
