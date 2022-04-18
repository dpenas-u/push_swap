#include "libft.h"
#include "ft_push_swap.h"

static	t_l	ft_init_arr(t_list **stack_a, t_list **stack_b)
{
	t_l	arr;

	arr.a1 = ft_atoi((*stack_a)->content);
	arr.a2 = ft_atoi((*stack_a)->next->content);
	arr.a3 = ft_atoi((ft_lstlast(*stack_a))->content);
	if (ft_lstsize(*stack_b))
	{
		arr.b1 = ft_atoi((*stack_b)->content);
		if (ft_lstsize(*stack_b) > 1)
			arr.b2 = ft_atoi((*stack_b)->next->content);
		else
			arr.b2 = 0;
	}
	return (arr);
}

void	ft_sort_small(t_list **stack_a, t_list **stack_b)
{
	t_l	arr;

	while ((ft_check_order_ascen(*stack_a) || ft_check_order_desc(*stack_b))
		|| ft_lstsize(*stack_b))
	{
		arr = ft_init_arr(stack_a, stack_b);
		if (!ft_check_order_ascen(*stack_a) && !ft_check_order_desc(*stack_b))
			ft_pusha(stack_a, stack_b);
		else
		{
			if (arr.a1 > arr.a2 && arr.a1 > arr.a3)
				ft_rotatea(stack_a);
			else if (arr.a1 > arr.a2 && arr.a1 < arr.a3)
				ft_swapa(stack_a);
			else if (arr.a1 < arr.a2 && arr.a1 > arr.a3)
				ft_rrotatea(stack_a);
			else if (arr.a1 < arr.a2 && arr.a1 < arr.a3
				&& *stack_b && arr.b1 > arr.a1)
				ft_pusha(stack_a, stack_b);
			else
				ft_pushb(stack_a, stack_b);
		}
	}
}
