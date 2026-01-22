/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:43:17 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:17:10 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "./libft.h"

int	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

/*
int	main(void)
{
	char	*str;
	int		len;

	str = "Hello world";
	len = ft_strlen(str);
	printf("len: [%s] [%i]\n", str, len);
	len = strlen(str);
	printf("len: [%s] [%i]\n", str, len);
	return (0);
}
*/
