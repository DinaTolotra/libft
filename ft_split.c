/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:49:36 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/29 11:55:06 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_separated(char const *s, char c)
{
	int	count;
	int	beg;
	int	end;

	end = 0;
	beg = -1;
	count = 0;
	while (s[end] || beg != -1)
	{
		if (s[end] != c && beg == -1)
			beg = end;
		if ((s[end] == 0 || s[end] == c) && beg != -1)
		{
			count++;
			beg = -1;
		}
		end = end + (s[end] != 0);
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count;
	int		res_i;
	int		beg;
	int		end;

	end = 0;
	beg = -1;
	res_i = 0;
	if (s == 0)
		return (0);
	count = count_separated(s, c);
	res = ft_calloc(sizeof(char *), (count + 1));
	while (s[end] || beg != -1)
	{
		if (s[end] != c && beg == -1)
			beg = end;
		if ((s[end] == 0 || s[end] == c) && beg != -1)
		{
			res[res_i++] = ft_substr(s, beg, end - beg);
			beg = -1;
		}
		end = end + (s[end] != 0);
	}
	return (res);
}
