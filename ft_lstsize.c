/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:15:49 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 23:17:32 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

int	ft_lstsize(t_list *lst)
{
	if (lst == 0)
		return (0);
	return (1 + ft_lstsize(lst->next));
}

/*
int	main(void)
{
	t_list	*lst;
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
	printf("%i\n", len == ft_lstsize(lst));
	while (lst)
	{
		t = lst;
		lst = lst->next;
		free(t);
	}
	return (0);
}
*/
