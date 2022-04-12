/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:33:11 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 09:33:12 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

void	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*aux;

	if (!(*lst2))
		return ;
	aux = *lst2;
	*lst2 = (*lst2)->next;
	ft_lstadd_front(lst1, aux);
}
