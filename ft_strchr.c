/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:44:51 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 10:24:18 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*res;

	res = 0;
	index = 0;
	while (s[index] && s[index] != (char)c)
		index++;
	if (s[index] == (char)c)
		res = ((char *)(&s[index]));
	return (res);
}

/*
int	main(void)
{
	char	c;
	char	*str;

	c = 'o';
	str = "Hello world";
	printf("[%c] found in [%s] at [%p]\n", c, str, ft_strchr(str, c));
	return (0);
}
*/
