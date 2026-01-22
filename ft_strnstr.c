/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:46 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 11:51:39 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <bsd/string.h>
//#include <stdio.h>

static int	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

static int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	index;

	index = 0;
	while (index < (n - 1) && s1[index] && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		index;
	char	*res;
	int		little_len;

	res = 0;
	index = 0;
	little_len = ft_strlen(little);
	while (index < (int)len && big[index] && res == 0)
	{
		if (ft_strncmp(&big[index], little, little_len) == 0)
			res = (char *)(big + index);
		index++;
	}
	return (res);
}

/*
int	main(void)
{
	char	*str;
	char	*res;
	char	*sub_str;

	str = "hello world";
	sub_str = "rl";
	res = ft_strnstr(str, sub_str, 12);
	printf("[%s] found in [%s] at [%p]\n", sub_str, str, res);
	res = strnstr(str, sub_str, 12);
	printf("[%s] found in [%s] at [%p]\n", sub_str, str, res);
	return (0);
}
*/
