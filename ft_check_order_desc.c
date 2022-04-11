#include "libft.h"
#include "ft_push_swap.h"

int	ft_check_order_desc(t_list **lst)
{
	int	i1;
	int	i2;
	t_list	*lst1;
	t_list	*aux;

	aux = *lst;
	while (aux && aux->next)
	{
		i1 = ft_atoi(aux->content);
		lst1 = aux->next;
		i2 = ft_atoi(lst1->content);
		if (i1 < i2)
			return (0);
		aux = aux->next;
	}
	return (1);
}
