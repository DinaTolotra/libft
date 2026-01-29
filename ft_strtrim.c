/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:30:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/29 11:55:35 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	first_not_in(const char *s, const char *set)
{
	int	index;
	int	stop;

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

static int	last_not_in(const char *s, const char *set)
{
	int	index;
	int	stop;

	stop = 0;
	index = ft_strlen(s) - 1;
	while (!stop && index > 0)
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
	int		s_len;
	int		res_len;
	int		start;

	if (s1 == 0 || set == 0)
		return (0);
	s_len = ft_strlen(s1);
	start = first_not_in(s1, set);
	res_len = last_not_in(s1, set);
	res_len = res_len - start + 1;
	if (res_len < 0)
		res_len = 0;
	res = ft_substr(s1, start, res_len);
	return (res);
}
