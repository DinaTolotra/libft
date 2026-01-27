/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:46 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 13:22:03 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>
#include "./libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	char	*res;
	size_t	little_len;

	res = 0;
	index = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return (char *)(big);
	if (len == 0)
		return (0);
	while (index <= (len - little_len) && big[index] && res == 0)
	{
		if (ft_strncmp(&big[index], little, little_len) == 0)
			res = &((char *)big)[index];
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
