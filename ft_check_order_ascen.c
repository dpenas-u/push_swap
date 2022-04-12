/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order_ascen.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:32:07 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 10:20:29 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

int	ft_check_order_ascen(t_list *lst)
{
	int		i1;
	int		i2;
	int		index;
	t_list	*lst1;

	index = 1;
	while (lst && lst->next)
	{
		i1 = ft_atoi(lst->content);
		lst1 = lst->next;
		i2 = ft_atoi(lst1->content);
		if (i1 > i2)
			return (index);
		index++;
		lst = lst->next;
	}
	return (0);
}
