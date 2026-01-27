/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:24:21 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 22:21:55 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		index;

	index = 0;
	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = 0;
	return (str);
}

/*
char	lower(unsigned int i, char c)
{
	(void)(i);
	return (ft_tolower(c));
}

int	main(void)
{
	char	*str;

	str = ft_strmapi("HEllo", lower);
	printf("[%s]\n", str);
	free(str);
	return (0);
}
*/
