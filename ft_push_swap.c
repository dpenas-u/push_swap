/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:34:09 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 14:43:48 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**l_argv;

	if (argc < 2)
		exit(0);
	else if (argc == 2)
		l_argv = ft_split(argv[1], ' ');
	else
		l_argv = argv + 1;
	if (!ft_check_arg(l_argv))
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	stack_a = 0;
	stack_b = 0;
	ft_create_list(l_argv, &stack_a);
	if (!ft_check_order_ascen(stack_a))
		exit(0);
	if (ft_lstsize(stack_a) < 6)
		ft_sort_small(&stack_a, &stack_b);
	//else
	//	ft_sort_big(&stack_a, &stack_b);
	/*
	ft_printf_list(stack_a);
	ft_putstr_fd("\n", 1);
	ft_printf_list(stack_b);
	system("leaks push_swap");
	*/
}

void	ft_create_list(char **l_argv, t_list **lst)
{
	int	i;

	i = -1;
	while (l_argv[++i])
		ft_lstadd_back(lst, ft_lstnew(l_argv[i]));
}

void	ft_printf_list(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux)
	{
		ft_putendl_fd(aux->content, 1);
		//free(lst);
		aux = aux->next;
	}
}
