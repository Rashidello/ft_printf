#include "stuff.h"


void ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr (nbr / 10);
		ft_putchar((nbr % 10) + '0'); 
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
}
int main()
{
	ft_putnbr(22112);
}