/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <todina-r@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 23:26:56 by todina-r          #+#    #+#             */
/*   Updated: 2026/01/22 23:32:37 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "./libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst && lst->next)
		return (ft_lstlast(lst->next));
	return (lst);
}

/*
int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*last;

	n1 = ft_lstnew(0);
	n2 = ft_lstnew(0);
	n2->next = n1;
	last = ft_lstlast(n2);
	printf("%i\n", n1 == last);
	free(n2);
	free(n1);
	return (0);
}
*/
