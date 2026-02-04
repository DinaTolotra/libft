/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:26:08 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/04 11:43:18 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (dest < src)
	{
		index = 0;
		while (index < n)
		{
			((char *)dest)[index] = ((char *)src)[index];
			index++;
		}
	}
	else if (dest > src)
	{
		index = n - 1;
		while (index >= 0)
		{
			((char *)dest)[index] = ((char *)src)[index];
			index--;
		}
	}
	return (dest);
}
