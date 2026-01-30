/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:40:56 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 16:00:43 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(long lnb)
{
	if (lnb < 0)
		return (-lnb);
	return (lnb);
}

static int	char_count(long lnb)
{
	int	count;

	count = 1;
	if (lnb < 0)
		count++;
	lnb = ft_abs(lnb);
	while (lnb)
	{
		lnb /= 10;
		count++;
	}
	if (count == 1)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	long	lnb;
	char	*res;
	int		count;

	lnb = ft_abs(n);
	count = char_count(lnb);
	res = malloc(sizeof(char) * char_count(lnb));
	if (res == 0)
		return (0);
	res[0] = '0';
	res[--count] = 0;
	if (n < 0)
		res[0] = '-';
	while (lnb)
	{
		res[--count] = (lnb % 10) + '0';
		lnb /= 10;
	}
	return (res);
}
