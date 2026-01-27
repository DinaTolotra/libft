/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:48:15 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 15:54:24 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;

	node = 0;
	if (lst)
	{
		node = malloc(sizeof(t_list));
		node->content = f(lst->content);
		node->next = ft_lstmap(lst->next, f, del);
	}
	return (node);
}
