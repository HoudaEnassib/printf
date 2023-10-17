#include "main.h"
#include <stdio.h>
#include <limits.h>

print_func_t print_funcs[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_integer},
	{'i', print_integer},
	{'b', print_binary},
	{'u', print_unsigned},
	{'o', print_octal},
	{'x', print_hex},
	{'X', print_hex_upper},
	{'p', print_pointer},
	{'S', print_string_upper},
	{'r', print_reverse},
	{'R', print_rot13},
	{0, NULL}
};


/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	char *str;
	char *rev_str;
	char *rot13_str;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	_printf("Binary:[%b]\n", 98);
	printf("Binary:[%d]\n", 98);

	str = "Hello, ALX";

	_printf("String Upper:[%S]\n", str);
	printf("String Upper:[%s]\n", str);

	rev_str = "Reverse This";

	_printf("Reverse:[%r]\n", rev_str);
	printf("Reverse:[%s]\n", rev_str);

	rot13_str = "Rot13 This";

	_printf("Rot13:[%R]\n", rot13_str);
	printf("Rot13:[%s]\n", rot13_str);

	return (0);
}
