/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 21:34:41 by rarayano          #+#    #+#             */
/*   Updated: 2025/12/31 21:34:41 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ag(va_list args, char print_out)
{
	int	output;

	output = 0;
	if (print_out == 'c')
		output = ft_putchar(va_arg(args, int));
	else if (print_out == 's')
		output = ft_putstr(va_arg(args, char *));
	else if (print_out == 'x' || print_out == 'X')
		output = ft_hex(va_arg(args, unsigned int), print_out);
	else if (print_out == 'p')
		output = ft_ptr(va_arg(args, unsigned long long));
	else if (print_out == '%')
		output = ft_putchar('%');
	else if (print_out == 'i' || print_out == 'd')
		output = ft_putnbr(va_arg(args, int));
	else if (print_out == 'u')
		output = ft_putunbr(va_arg(args, unsigned int));
	return (output);
}

int	ft_printf(const char *print_out, ...)
{
	int		i;
	int		len;
	int		proverka;
	va_list	args;

	proverka = 0;
	len = 0;
	i = 0;
	va_start (args, print_out);
	while (print_out[i])
	{
		if (print_out[i] == '%')
		{
			i++;
			proverka = ag(args, print_out[i]);
			if (proverka == -1)
				return (-1);
			len += proverka;
		}
		else
		{
			proverka = ft_putchar(print_out[i]);
			if (proverka == -1)
				return (-1);
			len += proverka;
		}
		i++;
	}
	va_end (args);
	return (len);
}
