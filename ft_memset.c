/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 08:43:13 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 09:01:26 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "./libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	index;

	index = 0;
	while (s && index < (int)n)
	{
		((char *)s)[index] = c;
		index++;
	}
	return (s);
}

/*
void	print_mem(void *p, size_t n)
{
	int	index;

	index = 0;
	while (p && index < (int)n)
	{
		printf("[%i]", ((char *)p)[index]);
		index++;
	}
}

int	main(void)
{
	char	buff[20];

	printf("Null:\t");
	memset(buff, 0, 20);
	print_mem(buff, 20);
	printf("\n1:\t");
	ft_memset(buff, 1, 20);
	print_mem(buff, 20);
	printf("\n1:\t");
	memset(buff, 0, 20);
	memset(buff, 1, 20);
	print_mem(buff, 20);
	printf("\n257:\t");
	ft_memset(buff, 257, 20);
	print_mem(buff, 20);
	printf("\n257:\t");
	memset(buff, 0, 20);
	memset(buff, 257, 20);
	print_mem(buff, 20);
	return (0);
}
*/
