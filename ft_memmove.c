/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:26:08 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 10:07:10 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	index;

	if (dest < src)
	{
		index = 0;
		while (index < (int)n)
		{
			((char *)dest)[index] = ((char *)src)[index];
			index++;
		}
	}
	else if (dest > src)
	{
		index = n - 1;
		while (index >= 0)
		{
			((char *)dest)[index] = ((char *)src)[index];
			index--;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	*str;

	str = strdup("Hello world");
	printf("before:\t[%s]\n", str);
	ft_memmove(str + 7, str + 1, 3);
	puts("dest = str + 7\tsrc = str + 1\tn = 3");
	printf("after:\t[%s]\n", str);
	free(str);
	return (0);
}
*/
