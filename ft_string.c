/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 21:34:44 by rarayano          #+#    #+#             */
/*   Updated: 2025/12/31 21:34:44 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stuff.h"

ssize_t ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

ssize_t ft_putstr(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
ssize_t ft_per(char c)
{
	ft_putchar('%');
}
