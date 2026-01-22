/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:50:59 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 14:26:05 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

void	ft_bzero(void *s, int n)
{
	int	index;

	index = 0;
	while (index < (int)n)
	{
		((char *)s)[index] = 0;
		index++;
	}
}

/*
int	main(void)
{
	char	*buff;
	int		index;
	int		len;

	index = 0;
	buff = strdup("Hello");
	len = strlen(buff);
	while (index < len)
	{
		printf("%i ", (int)buff[index]);
		index++;
	}
	putchar('\n');
	index = 0;
	ft_bzero(buff, len);
	while (index < len)
	{
		printf("%i ", (int)buff[index]);
		index++;
	}
	putchar('\n');
	free(buff);
	return (0);
}
*/
