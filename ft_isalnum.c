/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:31:07 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 14:28:41 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int	main(void)
{
	char	*str;

	str = "he110 w0r1d!\1";
	while (*str)
	{
		printf("[%c]\t%i\n", *str, ft_isalnum(*str));
		str++;
	}
	return (0);
}
*/
