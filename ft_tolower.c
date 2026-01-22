/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:31:46 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:17:35 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c - 'A' + 'a');
	return (c);
}

/*
int	main(void)
{
	int		index;
	char	*str;

	index = 0;
	str = "HeLlO";
	printf("str:\t%s\nlower:\t", str);
	while (str[index])
	{
		putchar(ft_tolower(str[index]));
		index++;
	}
	putchar('\n');
	return (0);
}
*/
