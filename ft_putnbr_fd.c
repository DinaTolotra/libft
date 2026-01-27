/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:12:35 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 16:33:49 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h>
//#include <stdio.h>
#include "./libft.h"

static void	_putnbr_fd_rec(long lnb, int fd)
{
	if (lnb >= 10)
		_putnbr_fd_rec(lnb / 10, fd);
	ft_putchar_fd((lnb % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	lnb;

	lnb = n;
	if (lnb < 0)
	{
		lnb = -lnb;
		ft_putchar_fd('-', fd);
	}
	if (lnb > 0)
		_putnbr_fd_rec(lnb, fd);
	else
		ft_putchar_fd('0', fd);
}

/*
int	main(void)
{
	int	fd;

	fd = open("file", O_WRONLY | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO );
	ft_putnbr_fd(-124, fd);
	close(fd);
}
*/
