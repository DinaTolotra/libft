/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:45:34 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:18:34 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "./libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	index;

	index = 0;
	while (index < (int)(n - 1) && s1[index] && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	n = 3;
	s1 = "abc";
	s2 = "abc";
	printf("cmp: [%s] [%s] [%i] [%i] == [%i]\n",
		s1, s2, n,
		ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
	n = 3;
	s1 = "abc";
	s2 = "abC";
	printf("cmp: [%s] [%s] [%i] [%i] == [%i]\n",
		s1, s2, n,
		ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
	n = 3;
	s1 = "abc";
	s2 = "aBc";
	printf("cmp: [%s] [%s] [%i] [%i] == [%i]\n",
		s1, s2, n,
		ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
	n = 2;
	s1 = "abc";
	s2 = "abc";
	printf("cmp: [%s] [%s] [%i] [%i] == [%i]\n",
		s1, s2, n,
		ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
	n = 2;
	s1 = "abc";
	s2 = "abC";
	printf("cmp: [%s] [%s] [%i] [%i] == [%i]\n",
		s1, s2, n,
		ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
	n = 2;
	s1 = "abc";
	s2 = "aBc";
	printf("cmp: [%s] [%s] [%i] [%i] == [%i]\n",
		s1, s2, n,
		ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
	n = 2;
	s1 = "abc";
	s2 = "Abc";
	printf("cmp: [%s] [%s] [%i] [%i] == [%i]\n",
		s1, s2, n,
		ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
	return (0);
}
*/
