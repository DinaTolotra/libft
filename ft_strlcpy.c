/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:43:26 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 11:17:47 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>

static int	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

int	ft_strlcpy(char *dst, const char *src, int size)
{
	int	index;
	int	src_len;

	index = 0;
	src_len = ft_strlen(src);
	while (src[index] && index < (size - 1))
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
