/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:33:32 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 13:39:10 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

void	ft_rotatea(t_list **lst)
{
	t_list	*aux;

	aux = *lst;
	*lst = (*lst)->next;
	aux->next = 0;
	ft_lstadd_back(lst, aux);
	ft_putendl_fd("ra", 1);
}

void	ft_rotateb(t_list **lst)
{
	t_list	*aux;

	aux = *lst;
	*lst = (*lst)->next;
	aux->next = 0;
	ft_lstadd_back(lst, aux);
	ft_putendl_fd("rb", 1);
}

void	ft_rotrot(t_list **lst1, t_list **lst2)
{
	ft_rotatea(lst1);
	ft_rotateb(lst2);
	ft_putendl_fd("rr", 1);
}
