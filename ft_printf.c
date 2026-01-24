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

	if (print_out == 'c')
		output = ft_putchar(va_arg(args, int));
	if (print_out == 's')
		output = ft_putstr(va_arg(args, char *));
	if (print_out == 'x' || print_out == 'X')
		output = ft_hex(va_arg(args, unsigned int), print_out);
	if (print_out == 'p')
		output = ft_ptr(va_arg(args, unsigned long long));
	if (print_out == '%')
		ft_putchar('%');
	if (print_out == 'i' || print_out == 'd')
		output = ft_putnbr(va_arg(args, int));
	if (print_out == 'u')
		output = ft_putunbr(va_arg(args, unsigned int));
	return (output);
}

intft_printf(const char *print_out, ...)
{
	int		i;
	int		len;
	va_list	args;

	len = 0;
	i = 0;
	va_start (args, print_out);
	while (print_out[i])
	{
		if (print_out[i] == '%')
		{
			i++;
			len += ag(args, print_out[i]);
		}
		else
			len += ft_putchar(print_out[i]);
		i++;
	}
	va_end (args);
	return (len);
}
