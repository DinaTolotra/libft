/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:40:56 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 19:13:55 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

static void	swap(char *a, char *b)
{
	char	t;

	t = *a;
	*a = *b;
	*b = t;
}

static void	reverse(char *s, int beg, int end)
{
	while (beg < end)
	{
		swap(s + beg, s + end - 1);
		beg++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	long	lnb;
	char	*res;
	int		beg;
	int		end;

	lnb = n;
	beg = 0;
	res = malloc(sizeof(char) * 12);
	res[0] = '0';
	if (lnb < 0)
	{
		lnb = -lnb;
		res[beg++] = '-';
	}
	end = beg;
	while (lnb > 0)
	{
		res[end++] = (lnb % 10) + '0';
		lnb = lnb / 10;
	}
	reverse(res, beg, end);
	res[end] = 0;
	return (res);
}

/*
int	main(void)
{
	char	*str;

	str = ft_itoa(-2147483648);
	printf("[%s]", str);
	return (0);
}
*/
