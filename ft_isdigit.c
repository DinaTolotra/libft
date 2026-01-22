/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:31:30 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 09:46:17 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int	main(void)
{
	char	*str;

	str = "he110 w0r1d!";
	while (*str)
	{
		printf("[%c]\t%i\n", *str, ft_isdigit(*str));
		str++;
	}
	return (0);
}
*/
