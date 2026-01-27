/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:17:33 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 16:47:07 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (len + 1));
	if (res)
	{
		ft_strlcpy(res, s1, len + 1);
		ft_strlcat(res, s2, len + 1);
	}
	return (res);
}

/*
int	main(void)
{
	char	*str;

	str = ft_strjoin("Hello ", "world");
	printf("[%s]\n", str);
	free(str);
	return (0);
}
*/
