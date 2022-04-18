/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_check_arguments.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:55:29 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 12:15:40 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_push_swap.h"

int	ft_check_arg(char *argv[])
{
	int	i;

	i = -1;
	while (argv[++i])
	{
		if (!ft_strncmp(argv[i], "0", ft_strlen(argv[i]))
			|| !ft_strncmp(argv[i], "-0", ft_strlen(argv[i])))
			continue ;
		else if (ft_strlen(argv[i]) > 9
			&& (!ft_atoi(argv[i]) || ft_atoi(argv[i]) == -1))
			return (0);
		else if (!ft_atoi(argv[i]) && ft_strlen(argv[i]))
			return (0);
	}
	if (!ft_check_dup(argv))
		return (0);
	return (1);
}

int	ft_check_dup(char *argv[])
{
	int	i;
	int	j;

	i = -1;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
		}
	}
	return (1);
}
