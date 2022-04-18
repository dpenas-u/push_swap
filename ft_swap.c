/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:27:28 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 13:40:11 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

void	ft_swapa(t_list **lst)
{
	t_list	*lst_aux;
	t_list	*lst_aux1;

	if (!(*lst) || !((*lst)->next))
		return ;
	lst_aux = *lst;
	lst_aux1 = (*lst)->next->next;
	*lst = (*lst)->next;
	(*lst)->next = lst_aux;
	(*lst)->next->next = lst_aux1;
	ft_putendl_fd("sa", 1);
}

void	ft_swapb(t_list **lst)
{
	t_list	*lst_aux;
	t_list	*lst_aux1;

	if (!(*lst) || !((*lst)->next))
		return ;
	lst_aux = *lst;
	lst_aux1 = (*lst)->next->next;
	*lst = (*lst)->next;
	(*lst)->next = lst_aux;
	(*lst)->next->next = lst_aux1;
	ft_putendl_fd("sb", 1);
}

void	ft_swapswap(t_list **lst1, t_list **lst2)
{
	ft_swapa(lst1);
	ft_swapb(lst2);
	ft_putendl_fd("ss", 1);
}
