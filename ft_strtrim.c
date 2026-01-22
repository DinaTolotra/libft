/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:30:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 16:47:44 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		index;
	int		res_i;
	int		len;

	res_i = 0;
	index = 0;
	len = ft_strlen(s1);
	res = malloc(sizeof(char) * len);
	while (s1[index]) {
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
