# ifndef MAIN_H
# define MAIN_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define S_BASE_16 "0123456789abcdef"
# define B_BASE_16 "0123456789ABCDEF"

int _printf(const char *s, ...);
int task_distributor(va_list ap, char c);

int _putaddress(void *addr);
int _put_intnbr(int n);
int _put_unint(unsigned int n);
int _put_hex(unsigned int num, int flag);
int _putchar(char c);
int _putstr(char *s);
char *ft_itoa_hex(unsigned long n, int flag);

#endif
