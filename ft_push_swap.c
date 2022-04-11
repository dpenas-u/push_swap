#include "libft.h"
#include "ft_push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	t_list	*lst;

	if (argc < 2)
		return (0);
	i = 0;
	lst = 0;
	while (argv[++i])
		ft_lstadd_back(&lst, ft_lstnew(argv[i]));
	//ft_swap(&lst);
	if (ft_check_order(&lst))
		printf("Si ");
	else
		printf("No ");
	while (lst)
	{
		printf("%s ", lst->content);
		free(lst);
		lst = lst->next;
	}
	system("leaks a.out");
}
