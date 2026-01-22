/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:31:18 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 15:16:03 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int	main(void)
{
	char	*str;

	str = "he110 w0r1d!\1";
	while (*str)
	{
		printf("[%c]\t%i\n", *str, ft_isalpha(*str));
		str++;
	}
	return (0);
}
*/
