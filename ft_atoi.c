/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:51:20 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 14:04:06 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

static int	ft_issign(int c)
{
	return (c == '-' || c == '+');
}

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *nptr)
{
	long	lnb;
	int		sign;
	int		index;

	lnb = 0;
	sign = 1;
	index = 0;
	while (ft_isspace(nptr[index]))
		index++;
	if (ft_issign(nptr[index]))
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (ft_isdigit(nptr[index]))
	{
		lnb = (lnb * 10) + (nptr[index] - '0');
		index++;
	}
	return (lnb * sign);
}

/*
int	main(void)
{
	char	*s;

	s = " 	-+125a";
	printf("[%s] to [%i]\n", s, ft_atoi(s));
	return (0);
}
*/
