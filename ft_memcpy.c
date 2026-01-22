/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:59:15 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:16:22 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
#include "./libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	index;

	index = 0;
	while (index < (int)n)
	{
		((char *)dest)[index] = ((char *)src)[index];
		index++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	*buff1;
	char	buff2[6];
	int		index;
	int		len;

	len = 6;
	index = 0;
	buff1 = "ab\0cd";
	while (index < len)
	{
		printf("%i ", buff1[index]);
		index++;
	}
	putchar('\n');
	index = 0;
	ft_memcpy(buff2, buff1, len);
	while (index < len)
	{
		printf("%i ", buff2[index]);
		index++;
	}
	return (0);
}
*/
