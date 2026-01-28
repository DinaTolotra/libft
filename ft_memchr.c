/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:14:56 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 22:04:49 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	void	*res;

	res = 0;
	index = 0;
	while (index < n && res == 0)
	{
		if (((char *)s)[index] == (char)c)
			res = ((char *)s + index);
		index++;
	}
	return (res);
}
