/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:33:02 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 18:50:45 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>
#include "./libft.h"

void	print_mem(const void *p, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		printf("[%i] ", ((char *)p)[index]);
		index++;
	}
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;
	int		res;

	res = 0;
	index = 0;
	while (res == 0 && index < n)
	{
		res = ((unsigned char *)s1)[index] - ((unsigned char *)s2)[index];
		index++;
	}
	return (res);
}

/*
int	main(void)
{
	char	*buff1;
	char	*buff2;

	buff1 = "a\0bb";
	buff2 = "a\0Cb";
	printf("[%i]\n", ft_memcmp(buff1, buff2, 4));
	return (0);
}
*/
