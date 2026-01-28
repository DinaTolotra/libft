/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:57:18 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 22:33:19 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	s_len;

	sub_s = 0;
	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (s_len - start < len)
		len = s_len - start;
	if (s_len < start)
		len = 0;
	sub_s = malloc(sizeof(char) * (len + 1));
	if (sub_s && start < s_len)
		ft_strlcpy(sub_s, s + start, len + 1);
	if (sub_s)
		sub_s[len] = 0;
	return (sub_s);
}
