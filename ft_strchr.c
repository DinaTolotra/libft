/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:44:51 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:16:33 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] && s[index] != c)
		index++;
	if (s[index])
		return ((char *)(s + index));
	return (0);
}

/*
int	main(void)
{
	char	c;
	char	*str;

	c = 'o';
	str = "Hello world";
	printf("[%c] found in [%s] at [%li]\n", c, str, ft_strchr(str, c) - str);
	return (0);
}
*/
