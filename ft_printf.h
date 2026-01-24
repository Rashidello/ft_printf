/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 18:50:19 by rarayano          #+#    #+#             */
/*   Updated: 2026/01/24 18:50:19 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int		ft_printf(const char *print_out, ...);
ssize_t	ft_putnbr(int nbr);
ssize_t	ft_putchar(char c);
ssize_t	ft_putstr(char *str);
ssize_t	ft_putunbr(unsigned int nbr);
ssize_t	ft_hex(unsigned long long nbr, char cors);
ssize_t	ft_ptr(unsigned long long nbr);
void	ft_per(void);