/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:43:26 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:42:45 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>
#include "./libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	index;
	int	src_len;

	index = 0;
	src_len = ft_strlen(src);
	while (src[index] && index < (int)(size - 1))
	{
		dst[index] = src[index];
		index++;
	}
	if (size > 0)
		dst[index] = 0;
	return (src_len);
}

/*
int	main(void)
{
	char	str[2];
	int		ret;

	ret = ft_strlcpy(str, "Hello", 2);
	printf("str: [%s] [%i]\n", str, ret);
	ret = strlcpy(str, "", 2);
	ret = strlcpy(str, "Hello", 2);
	printf("str: [%s] [%i]\n", str, ret);
	return (0);
}
*/
