/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:21 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 10:44:59 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	if (*s != 0)
		res = ft_strrchr(s + 1, c);
	if (res == 0 && *s == (char)c)
		res = (char *)s;
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
