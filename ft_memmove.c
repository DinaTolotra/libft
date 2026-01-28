/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:26:08 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 21:06:13 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	index;

	if (dest < src)
	{
		index = 0;
		while (index < (int)n)
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
