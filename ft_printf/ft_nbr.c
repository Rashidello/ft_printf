/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 21:34:32 by rarayano          #+#    #+#             */
/*   Updated: 2025/12/31 21:34:32 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char *hx;
	ssize_t rec;
	char obo;
	ssize_t total;

	total = 0;
	if (cors == 'X')
		hx = "0123456789ABCDEF";
	else
		hx = "0123456789abcdef";
	if (nbr > 15)
	{
		rec = ft_hex(nbr / 16, cors);
		if (rec == -1)
			return(rec);
		total += rec;
	}
	obo = hx[nbr % 16];
	rec = write(1, &obo, 1);
	if (rec == -1)
		return (-1);
	total += rec;
	return(total);
}

ssize_t ptr(unsigned long long nbr)
{
	
}
