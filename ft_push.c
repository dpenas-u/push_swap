#include "libft.h"
#include "ft_push_swap.h"

void	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*aux;

	if (!(*lst2))
		return ;
	aux = *lst2;
	*lst2 = (*lst2)->next;
	ft_lstadd_front(lst1, aux);
}
