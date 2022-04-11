/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:27:28 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/11 14:51:44 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

void	ft_swap(t_list **lst)
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
}

void	ft_swapswap(t_list **lst1, t_list **lst2)
{
	ft_swap(lst1);
	ft_swap(lst2);
}
