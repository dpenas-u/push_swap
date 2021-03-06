/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order_desc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:32:49 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 10:37:07 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

int	ft_check_order_desc(t_list *lst)
{
	int		i1;
	int		i2;
	int		index;
	t_list	*lst1;
	t_list	*aux;

	index = 1;
	aux = lst;
	while (aux && aux->next)
	{
		i1 = ft_atoi(aux->content);
		lst1 = aux->next;
		i2 = ft_atoi(lst1->content);
		if (i1 < i2)
			return (index);
		index++;
		aux = aux->next;
	}
	return (0);
}
