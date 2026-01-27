/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:43:26 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 09:40:33 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>
#include "./libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	int		len;

	index = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[index] && index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
	return (len);
}

/*
int	main(void)
{
	char	str[2];
	int		ret;

	ret = strlcpy(str, "Hello", 0);
	printf("str: [%s] [%i]\n", str, ret);
	ret = strlcpy(str, "", 0);
	ret = ft_strlcpy(str, "Hello", 0);
	printf("str: [%s] [%i]\n", str, ret);
	return (0);
}
*/
