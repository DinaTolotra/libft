/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:40:57 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 20:02:17 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		index;

	index = 0;
	while (s[index])
	{
		f(index, s + index);
		index++;
	}
}

/*
void	lower(unsigned int i, char *c)
{
	(void)(i);
	*c = ft_tolower(*c);
}

int	main(void)
{
	char	*str;

	str = ft_strdup("HellO");
	ft_striteri(str, lower);
	printf("[%s]\n", str);
	free(str);
	return (0);
}
*/
