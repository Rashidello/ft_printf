#include <unistd.h>
#include <stdio.h>

int	ft_put_hex(unsigned long long n, int uppercase, int level)
{
	int		written;
	int		result;
	char	*base;
	char	digit;

	if (uppercase == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	written = 0;
	if (n >= 16)
	{
		result = ft_put_hex(n / 16, uppercase, level + 1);
		if (result < 0)
			return (result);
		written += result;
	}
	printf("\n\n------- LEVEL %d -------\n", level);
	printf("index in base string: %d\n", n % 16);
	digit = base[n % 16];
	printf("digit from base string: %c\n", digit);
	// result = write(1, &digit, 1);
	if (result == -1)
		return (-1);
	written += result;
	return (written);
}

int main()
{
	// ft_putstr("test");
	unsigned long long n = 0x786AF / 16 / 16 / 16 ;
	// 0x7fffffff
	// char* base = "0123456789ABCDEF";
	// for (int i = 20; i > 0; i--) {
	// 	printf("%c\n", base[(int)n % 16]);
	// 	n /= 16;
	// }
	ft_put_hex(0x15678FF, 0, 1);
}