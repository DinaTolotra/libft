/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:33:02 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:16:19 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	index;

	index = 0;
	while (index < (int)(n - 1) && ((char *)s1)[index] == ((char *)s2)[index])
		index++;
	return (((char *)s1)[index] - ((char *)s2)[index]);
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
