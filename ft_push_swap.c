/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:34:09 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 09:34:10 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	t_list	*lst1;
	t_list	*lst2;

	if (argc < 2)
		exit(0);
	if (!ft_check_arg(argv))
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	ft_create_list(argv, lst);
	i = 0;
	lst = 0;
	while (argv[++i])
		ft_lstadd_back(&lst, ft_lstnew(argv[i]));
	ft_rrotate(&lst);
	while (lst)
	{
		printf("%s\n", lst->content);
		free(lst);
		lst = lst->next;
	}
	system("leaks push_swap");
}
