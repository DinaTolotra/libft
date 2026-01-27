/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:57:18 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 16:24:35 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len - start < len)
		len = s_len - start;
	if (s_len < start)
		len = 0;
	sub_s = calloc(sizeof(char), (len + 1));
	if (start < s_len)
		ft_strlcpy(sub_s, s + start, len + 1);
	sub_s[len] = 0;
	return (sub_s);
}

/*
int	main(void)
{
	char	*str;
	int		start;
	int		len;
	char	*sub;

	str = "Hello world";
	start = 1;
	len = 4;
	sub = ft_substr(str, start, len);
	printf("sub: in [%s] is [%s]\n", str, sub);
	free(sub);
	return (0);
}
*/
