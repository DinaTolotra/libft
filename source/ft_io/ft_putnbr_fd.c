/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:12:35 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/06 08:50:38 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_putnbr_fd_rec(long lnb, int fd)
{
	int	count;

	count = 0;
	if (lnb >= 10)
		count += _putnbr_fd_rec(lnb / 10, fd);
	count += ft_putchar_fd((lnb % 10) + '0', fd);
	return (count);
}

int	ft_putnbr_fd(int n, int fd)
{
	long	lnb;
	int		count;

	lnb = n;
	count = 0;
	if (lnb < 0)
	{
		lnb = -lnb;
		count += ft_putchar_fd('-', fd);
	}
	count += _putnbr_fd_rec(lnb, fd);
	return (count);
}
