/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:34 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 21:57:18 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		res;

	res = 0;
	index = 0;
	while (index < n && (s1[index] || s2[index]) && res == 0)
	{
		res = (s1[index] - s2[index]);
		index++;
	}
	return (res);
}
