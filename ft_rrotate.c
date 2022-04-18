/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:33:38 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 13:39:42 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

void	ft_rrotatea(t_list **lst)
{
	t_list	*aux;
	int		i;

	i = ft_lstsize(*lst);
	ft_lstadd_front(lst, ft_lstlast(*lst));
	aux = *lst;
	while (--i)
		*lst = (*lst)->next;
	(*lst)->next = 0;
	*lst = aux;
	ft_putendl_fd("rra", 1);
}

void	ft_rrotateb(t_list **lst)
{
	t_list	*aux;
	int		i;

	i = ft_lstsize(*lst);
	ft_lstadd_front(lst, ft_lstlast(*lst));
	aux = *lst;
	while (--i)
		*lst = (*lst)->next;
	(*lst)->next = 0;
	*lst = aux;
	ft_putendl_fd("rrb", 1);
}

void	ft_rrotrrot(t_list **lst1, t_list **lst2)
{
	ft_rrotatea(lst1);
	ft_rrotateb(lst2);
	ft_putendl_fd("rrr", 1);
}
