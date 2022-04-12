/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:34:09 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 09:43:00 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_list	*lsta;
	t_list	*lstb;

	if (argc < 2)
		exit(0);
	if (!ft_check_arg(argv))
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	lsta = 0;
	lstb = 0;
	ft_create_list(argv, &lsta);
	ft_printf_list(lsta);
	ft_putstr_fd("\n", 1);
	ft_printf_list(lstb);
	system("leaks push_swap");
}

void	ft_create_list(char *argv[], t_list **lst)
{
	int	i;

	i = 0;
	while (argv[++i])
		ft_lstadd_back(lst, ft_lstnew(argv[i]));
}

void	ft_printf_list(t_list *lst)
{
	while (lst)
	{
		ft_putendl_fd(lst->content, 1);
		free(lst);
		lst = lst->next;
	}
}
