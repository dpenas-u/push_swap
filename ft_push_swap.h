/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:33:25 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 13:45:29 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

typedef	struct	l
{
	int	a1;
	int	a2;
	int	a3;
	int	b1;
	int	b2;
	int	b3;
}	t_l;

void	ft_swap(t_list **lst);
void	ft_swapswap(t_list **lst1, t_list **lst2);
void	ft_push(t_list **lst1, t_list **lst2);
void	ft_rotate(t_list **lst);
void	ft_rotrot(t_list **lst1, t_list **lst2);
void	ft_rrotate(t_list **lst);
void	ft_rrotrrot(t_list **lst1, t_list **lst2);
int		ft_check_order_ascen(t_list *lst);
int		ft_check_order_desc(t_list *lst);
int		ft_check_arg(char *argv[]);
int		ft_check_dup(char *argv[]);
void	ft_create_list(char **l_argv, t_list **lst);
void	ft_printf_list(t_list *lst);
void	ft_sort_small3(t_list **stack_a);
void	ft_sort_small5(t_list **stack_a, t_list **stack_b);
void	ft_sort_big(t_list **stack_a, t_list **stack_b);

#endif
