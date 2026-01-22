/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 08:31:52 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 09:52:18 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 'a' + 'A');
	return (c);
}

/*
int	main(void)
{
	char	*str;
	int		index;

	index = 0;
	str = "HeLlO";
	printf("str:\t%s\nupper:\t", str);
	while (str[index])
	{
		putchar(ft_toupper(str[index]));
		index++;
	}
	putchar('\n');
	return (0);
}
*/
