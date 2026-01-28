/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:04:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 17:49:34 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(size_t a, size_t b)
{
	return (a && (size_t)(a * b) / a != b);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	full_size;

	res = 0;
	if (overflow(nmemb, size))
		return (0);
	full_size = nmemb * size;
	if (full_size == 0)
		full_size = 1;
	res = malloc(full_size);
	if (res && full_size > 0)
		ft_bzero(res, full_size);
	return (res);
}

/*
int	main(void)
{
	char	*buff;
	int		index;

	index = 0;
	buff = ft_calloc(3, 18446744073709551611);
	free(buff);
	putchar('\n');
	return (0);
}
*/
