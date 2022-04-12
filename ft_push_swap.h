#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

void	ft_swap(t_list **lst);
void	ft_swapswap(t_list **lst1, t_list **lst2);
void	ft_push(t_list **lst1, t_list **lst2);
void	ft_rotate(t_list **lst);
void	ft_rotrot(t_list **lst1, t_list **lst2);
void	ft_rrotate(t_list **lst);
void	ft_rrotrrot(t_list **lst1, t_list **lst2);
int		ft_check_order_ascen(t_list **lst);
int		ft_check_order_desc(t_list **lst);
int		ft_check_arg(char *argv[]);
int		ft_check_dup(char *argv[]);

#endif
