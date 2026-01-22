/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:46 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 22:28:13 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>
#include "./libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		index;
	char	*res;
	int		little_len;

	res = 0;
	index = 0;
	little_len = ft_strlen(little);
	while (index < (int)len && big[index] && res == 0)
	{
		if (ft_strncmp(&big[index], little, little_len) == 0)
			res = (char *)(big + index);
		index++;
	}
	return (res);
}

/*
int	main(void)
{
	char	*str;
	char	*res;
	char	*sub_str;

	str = "hello world";
	sub_str = "rl";
	res = ft_strnstr(str, sub_str, 12);
	printf("[%s] found in [%s] at [%p]\n", sub_str, str, res);
	res = strnstr(str, sub_str, 12);
	printf("[%s] found in [%s] at [%p]\n", sub_str, str, res);
	return (0);
}
*/
