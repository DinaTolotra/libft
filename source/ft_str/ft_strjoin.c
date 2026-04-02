/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:17:33 by todina-r          #+#    #+#             */
/*   Updated: 2026/03/04 07:27:35 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = 0;
	s2_len = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1)
		s1_len = ft_strlen(s1);
	if (s2)
		s2_len = ft_strlen(s2);
	res = malloc(sizeof(char) * (s2_len + s1_len + 1));
	if (res == 0)
		return (0);
	if (s1)
		ft_strlcpy(res, s1, s2_len + s1_len + 1);
	if (s2)
		ft_strlcpy(res + s1_len, s2, s2_len + 1);
	res[s1_len + s2_len] = 0;
	return (res);
}
