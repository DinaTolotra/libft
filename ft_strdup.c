/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:43:51 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 14:20:12 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

char	*ft_strdup(const char *s)
{
	int		index;
	int		s_len;
	char	*dst;

	dst = 0;
	index = 0;
	s_len = ft_strlen(s);
	dst = malloc(sizeof(char) * (s_len + 1));
	if (dst == 0)
		return (0);
	while (s[index])
	{
		dst[index] = s[index];
		index++;
	}
	dst[index] = 0;
	return (dst);
}

/*
int	main(void)
{
	char	*str;
	char	*n_str;

	str = "Hello world";
	n_str = ft_strdup(str);
	printf("dup: [%s] in [%p]\n", str, str);
	printf("res: [%s] in [%p]\n", n_str, n_str);
	free(n_str);
	return (0);
}
*/
