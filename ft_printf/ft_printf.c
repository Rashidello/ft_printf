#include "stuff.h"



ssize_t ag(va_list args, char print_out)
{
	int output;
	if (print_out == 'c')
		output = ft_putchar(va_arg(args, int));
	if (print_out == 's')
		output = ft_putstr(va_arg(args, char *));
	if (print_out == 'x' || print_out == 'X')
	
	

	return (output);
}
int ft_printf(const char *print_out, ...)
{
	int i;
	int len;
	va_list args;

	len = 0;
	i = 0;
	va_start(args, print_out);
	while (print_out[i])
	{
		if (print_out[i] == '%')
		{
			i++;
			len += ag(args,print_out[i]);
		}
		else
			len += ft_putchar(print_out[i]);
		i++;
	}
	va_end(args);
	return(len);
}

int main ()
{
	char *i = "hello";
	printf("original --> %s\n", i);
	ft_printf("mine --> %s", i);
}