/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:04:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 14:16:18 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
//#include <stdio.h>
#include "./libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	full_size;

	res = 0;
	full_size = nmemb * size;
	if (nmemb && size > SIZE_MAX / nmemb)
		return (0);
	res = malloc(full_size);
	if (res)
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
