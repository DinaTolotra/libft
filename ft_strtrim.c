/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:30:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/02/04 11:22:23 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	first_not_in(const char *s, const char *set)
{
	size_t	index;
	int		stop;

	stop = 0;
	index = 0;
	while (!stop && s[index])
	{
		if (ft_strchr(set, s[index]) == 0)
			stop = 1;
		else
			index++;
	}
	return (index);
}

static size_t	last_not_in(const char *s, const char *set)
{
	size_t	index;
	int		stop;

	stop = 0;
	index = ft_strlen(s) - 1;
	while (!stop && index >= 0)
	{
		if (ft_strchr(set, s[index]) == 0)
			stop = 1;
		else
			index--;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	res_len;
	size_t	begin;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	begin = first_not_in(s1, set);
	end = last_not_in(s1, set);
	res_len = end - begin + 1;
	if (end < begin)
		res_len = 0;
	res = ft_substr(s1, begin, res_len);
	return (res);
}
