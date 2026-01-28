/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:44:13 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 21:14:26 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_i;
	size_t	dst_len;
	size_t	src_len;

	src_i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len > size)
		dst_len = size;
	if (size > 0)
	{
		while ((dst_len + src_i) < size - 1 && src[src_i])
		{
			dst[dst_len + src_i] = src[src_i];
			src_i++;
		}
		if (dst_len < size)
			dst[dst_len + src_i] = 0;
	}
	return (src_len + dst_len);
}
