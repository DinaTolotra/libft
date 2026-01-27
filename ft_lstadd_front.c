/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:03:48 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/27 22:28:14 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
		new->next = *lst;
	(*lst) = new;
}

/*
int	main(void)
{
	t_list	*n1;
	t_list	*n2;

	n1 = ft_lstnew(0);
	n2 = ft_lstnew(0);
	ft_lstadd_front(&n2, n1);
	printf("%i\n", n1 == n2);
	free(n1->next);
	free(n1);
	return (0);
}
*/
