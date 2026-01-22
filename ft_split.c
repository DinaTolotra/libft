/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:49:36 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 18:38:12 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

static int	count_separated(char const *s, char c)
{
	int	count;
	int	beg;
	int	end;

	end = 0;
	beg = -1;
	count = 0;
	while (s[end])
	{
		if (s[end] != c && beg == -1)
			beg = end;
		if (s[end] == c && beg != -1)
		{
			count++;
			beg = -1;
		}
		end++;
	}
	if (beg != -1)
		count++;
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
	count = count_separated(s, c);
	res = ft_calloc(sizeof(char *), (count + 1));
	while (s[end])
	{
		if (s[end] != c && beg == -1)
			beg = end;
		if (s[end] == c && beg != -1)
		{
			res[res_i++] = ft_substr(s, beg, end - beg);
			beg = -1;
		}
		end++;
	}
	if (beg != -1)
		res[res_i++] = ft_substr(s, beg, end - beg);
	return (res);
}

/*
int	main(void)
{
	char	*str;
	char	**res;
	int		index;

	index = 0;
	str = "Hello world";
	res = ft_split(str, ' ');
	while (res[index])
	{
		printf("[%s]\n", res[index]);
		free(res[index]);
		index++;
	}
	free(res);
	return (0);
}
*/
