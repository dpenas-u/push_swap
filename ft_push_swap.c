#include "libft.h"
#include "ft_push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	t_list	*lst;

	if (argc < 2)
		exit(0);
	if (!ft_check_arg(argv))
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
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
