#include "stuff.h"


ssize_t ft_putnbr(int nbr)
{
	int size;

	if (nbr == -2147483648)
		size += (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		ft_putchar('-');
		size += (nbr = -nbr);
	}
	if (nbr >= 10)
	{
		size += (ft_putnbr (nbr / 10));
		size += (ft_putchar((nbr % 10) + '0')); 
	}
	else if (nbr >= 0 && nbr <= 9)
		size += (ft_putchar(nbr + '0'));
	return (size);
}
ssize_t ft_putunbr(unsigned int nbr)
{
	int size;

	size = 0;
	if (nbr >= 10)
	{
		size += (ft_putnbr(nbr / 10));
		size += (ft_putchar(nbr % 10));
	}
	else if(nbr >= 0 && nbr <= 9)
		size += (ft_putchar(nbr + '0'));
	return (size);

}
ssize_t ft_hex(unsigned long long nbr, char cors)
{

}