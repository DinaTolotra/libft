/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:57:18 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 22:31:23 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	sub_s = malloc(sizeof(char) * (len + 1));
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
