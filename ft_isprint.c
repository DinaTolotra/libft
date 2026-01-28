/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:31:38 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/28 15:38:43 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

int	ft_isprint(int c)
{
	return ((c >= 33 && c <= 126) || c == ' ');
}

/*
int	main(void)
{
	char	*str;

	str = "he110 w0r1d!\1";
	while (*str)
	{
		printf("[%c]\t%i\n", *str, ft_isprint(*str));
		str++;
	}
	return (0);
}
*/
