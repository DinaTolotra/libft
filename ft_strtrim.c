/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:30:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 16:32:07 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

static int	count_leftchar(char const *s, char const *set)
{
	int	count;
	int	index;
	int	set_i;
	int	valid;

	count = 0;
	index = 0;
	while (s[index])
	{
		set_i = 0;
		valid = 1;
		while (set[set_i] && valid == 1)
		{
			if (set[set_i] == s[index])
				valid = 0;
			set_i++;
		}
		count = count + valid;
		index++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		index;
	int		res_i;
	int		len;

	res_i = 0;
	index = 0;
	len = count_leftchar(s1, set);
	res = malloc(sizeof(char) * (len + 1));
	while (s1[index])
	{
		if (ft_strchr(set, s1[index]) == 0)
		{
			res[res_i] = s1[index];
			res_i++;
		}
		index++;
	}
	res[res_i] = 0;
	return (res);
}

/*
int	main(void)
{
	char	*org;
	char	*res;

	org = "Hello world";
	res = ft_strtrim(org, "o ");
	printf("[%s]\n", res);
	free(res);
	return (0);
}
*/
