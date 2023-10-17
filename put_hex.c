#include "main.h"

/**
 * _putaddress - Custom function to write
 * a memory address to the standard output.
 *
 * @addr: The memory address to be written.
 *
 * Return: The number of characters written.
 */

int	_putaddress(void *addr)
{
	unsigned long	num;
	int				i;
	char			*str;

	num = (unsigned long)addr;
	i = 0;
	i += _putstr("0x");
	str = ft_itoa_hex(num, 0);
	i += _putstr(str);
	free(str);
	return (i);
}
