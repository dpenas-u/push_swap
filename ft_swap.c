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

#include <stdio.h>
#include "libft.h"

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

void	ft_rotate(t_list **lst)
{
	t_list	*aux;

	aux = *lst;
	*lst = (*lst)->next;
	aux->next = 0;
	ft_lstadd_back(lst, aux);
}

void	ft_rrotate(t_list **lst)
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
}

void	ft_rrotaterrotate(t_list **lst1, t_list **lst2)
{
	ft_rrotate(lst1);
	ft_rrotate(lst2);
}

void	ft_rotaterotate(t_list **lst1, t_list **lst2)
{
	ft_rotate(lst1);
	ft_rotate(lst2);
}

void	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*aux;

	if (!(*lst2))
		return ;
	aux = *lst2;
	*lst2 = (*lst2)->next;
	ft_lstadd_front(lst1, aux);
}

int	main(void)
{
	t_list	*l;
	t_list	*l1;

	l = ft_lstnew("1");
	l->next = ft_lstnew("2");
	l->next->next = ft_lstnew("3");
	l1 = ft_lstnew("A");
	l1->next = ft_lstnew("B");
	l1->next->next = ft_lstnew("C");
	ft_rrotaterrotate(&l, &l1);
	while (l)
	{
		printf("\n%s\n", l->content);
		free(l);
		l = l->next;
	}
	printf("\n----------------\n");
	while (l1)
	{
		printf("\n%s\n", l1->content);
		free(l1);
		l1 = l1->next;
	}
	system("leaks a.out");
}
