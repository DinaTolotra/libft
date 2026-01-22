/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:21 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:17:24 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*res;

	res = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			res = (char *)(s + index);
		index++;
	}
	return (res);
}

/*
int	main(void)
{
	char	*str;
	char	*res;
	char	c;

	c = 'o';
	str = "Hello world";
	res = ft_strrchr(str, c);
	printf("chr: last [%c] in [%s] at [%p]\n", c, str, res);
	res = strrchr(str, c);
	printf("chr: last [%c] in [%s] at [%p]\n", c, str, res);
	return (0);
}
*/
