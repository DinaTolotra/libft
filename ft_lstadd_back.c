/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:35:09 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 15:50:48 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*
int	main(void)
{
	t_list	*lst;
	t_list	*last;
	t_list	*t;
	int		index;
	int		len;

	len = 5;
	index = 1;
	lst = ft_lstnew(0);
	while (index < len)
	{
		ft_lstadd_front(&lst, ft_lstnew(0));
		index++;
	}
	last = ft_lstnew(0);
	ft_lstadd_back(&lst, last);
	printf("%i\n", ft_lstlast(lst) == last);
	while (lst)
	{
		t = lst;
		lst = lst->next;
		free(t);
	}
	return (0);
}
*/
