#include "libft.h"
#include "ft_push_swap.h"

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

void	ft_rrotrrot(t_list **lst1, t_list **lst2)
{
	ft_rrotate(lst1);
	ft_rrotate(lst2);
}
