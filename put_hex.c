#include "main.h"

/**
 * _putaddress - Custom function to write
 * a memory address to the standard output.
 *
 * @addr: The memory address to be written.
 *
 * Return: The number of characters written.
 */

int _putaddress(void *addr)
{
	unsigned long num;
	int i;
	char *str;

	num = (unsigned long)addr;
	i = 0;
	i += _putstr("0x");
	str = ft_itoa_hex(num, 0);
	i += _putstr(str);
	free(str);

	return (i);
}

/**
 * _put_hex - Custom function to write a
 * hexadecimal number to the standard output.
 *
 * @num: The hexadecimal number to be written.
 * @flag: Flag indicating if the number should
 * include the "0x" prefix (1 for yes, 0 for no).
 *
 * Return: The number of characters written.
 */

int _put_hex(unsigned int num, int flag)
{
	int i;
	char *str;

	i = 0;
	str = ft_itoa_hex(num, flag);
	i += _putstr(str);
	free(str);
	return (i);
}
