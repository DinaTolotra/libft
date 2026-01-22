/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:14:56 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:16:16 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	index;

	index = 0;
	while (index < (int)n && ((char *)s)[index] != (char)c)
		index++;
	if (((char *)s)[index] == (char)c)
		return ((char *)s + index);
	return (0);
}

/*
int	main(void)
{
	char	*str;
	int		len;
	char	c;

	c = 'w';
	len = 12;
	str = "Hello\0world";
	printf("str: [%p]\n", str);
	printf("[%c] found at [%p]\n", c, ft_memchr(str, c, len));
	printf("[%c] found at [%p]\n", c, memchr(str, c, len));
	return (0);
}
*/
