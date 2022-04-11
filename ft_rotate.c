#include "libft.h"
#include "ft_push_swap.h"

void	ft_rotate(t_list **lst)
{
	t_list	*aux;

	aux = *lst;
	*lst = (*lst)->next;
	aux->next = 0;
	ft_lstadd_back(lst, aux);
}

void	ft_rotrot(t_list **lst1, t_list **lst2)
{
	ft_rotate(lst1);
	ft_rotate(lst2);
}
