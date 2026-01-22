/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:44:13 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:17:02 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>
#include "./libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_i;
	int	src_i;
	int	length;

	dst_i = 0;
	src_i = 0;
	length = ft_strlen(dst) + ft_strlen(src);
	while (dst[dst_i] && dst_i < (int)(size - 1))
		dst_i++;
	while (src[src_i] && (dst_i + src_i) < (int)(size - 1))
	{
		dst[dst_i + src_i] = src[src_i];
		src_i++;
	}
	dst[dst_i + src_i] = 0;
	return (length);
}

/*
int	main(void)
{
	char	str[20];
	int		ret;

	strcpy(str, "Hello ");
	ret = strlcat(str, "world", 20);
	printf("str: [%s]\tret: [%i]\n", str, ret);
	strcpy(str, "Hello ");
	ret = ft_strlcat(str, "world", 20);
	printf("str: [%s]\tret: [%i]\n", str, ret);
	return (0);
}
*/
