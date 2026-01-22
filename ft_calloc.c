/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:04:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:15:57 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = malloc(nmemb * size);
	if (res)
		ft_bzero(res, nmemb * size);
	return (res);
}

/*
int	main(void)
{
	char	*buff;
	int		index;

	index = 0;
	buff = ft_calloc(sizeof(char), 4);
	while (index < 4)
	{
		printf("%i ", (int)buff[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
*/
