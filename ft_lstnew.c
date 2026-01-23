/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:44:52 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 22:50:27 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->content = content;
		node->next = 0;
	}
	return (node);
}

/*
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(0);
	printf("%p\n", lst);
	free(lst);
	return (0);
}
*/
