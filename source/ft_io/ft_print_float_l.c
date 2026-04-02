/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42.antananariv  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:02:00 by todina-r          #+#    #+#             */
/*   Updated: 2026/04/02 13:02:02 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n);

int	ft_print_float_l(int fd, va_list list)
{
	double	d;
	int		decimal;
	int		fractional;
	int		count;

	count = 0;
	d = va_arg(list, double);
	decimal = (int)d;
	fractional = (int)((ft_abs(d) - ft_abs(decimal)) * 100);
	count += ft_putnbr_fd(decimal, fd);
	count += ft_putchar_fd('.', fd);
	count += ft_putnbr_fd(fractional, fd);
	if (fractional < 10)
		count += ft_putchar_fd('0', fd);
	return (count);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
