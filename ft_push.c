/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:33:11 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 13:37:19 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

void	ft_pushb(t_list **lst1, t_list **lst2)
{
	t_list	*aux;

	if (!(*lst1))
		return ;
	aux = *lst1;
	*lst1 = (*lst1)->next;
	ft_lstadd_front(lst2, aux);
	ft_putendl_fd("pb", 1);
}

void	ft_pusha(t_list **lst1, t_list **lst2)
{
	t_list	*aux;

	if (!(*lst2))
		return ;
	aux = *lst2;
	*lst2 = (*lst2)->next;
	ft_lstadd_front(lst1, aux);
	ft_putendl_fd("pa", 1);
}
