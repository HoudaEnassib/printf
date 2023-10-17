#include "main.h"

/**
 * len_calculator - Calculate the length of a hexadecimal representation.
 * @n: The hexadecimal number.
 *
 * Return: The length of the hexadecimal representation.
 */

static int	len_calculator(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

/**
 * ft_itoa_hex - Convert an unsigned long integer to a hexadecimal string.
 * @num: The unsigned long integer to be converted.
 * @flag: Flag indicating whether to use uppercase
 * (1) or lowercase (0) letters.
 *
 * Return: A dynamically allocated string
 * containing the hexadecimal representation.
 */

char *ft_itoa_hex(unsigned long num, int flag)
{
	char *num_str;
	int len;

	len = len_calculator(num);
	num_str = malloc(len + 1);
	if (!num_str)
		return (NULL);
	num_str[len--] = '\0';
	if (num == 0)
		num_str[0] = '0';
	while (num > 0)
	{
		if (flag)
			num_str[len--] = B_BASE_16[num % 16];
		else
			num_str[len--] = S_BASE_16[num % 16];
		num /= 16;
	}
	return (num_str);
}
