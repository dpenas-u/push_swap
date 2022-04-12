/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:00:06 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/12 10:16:04 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned int	is_neg;
	unsigned int	n;

	while (*nptr && ((*nptr > 8 && *nptr < 14) || *nptr == 32))
		nptr++;
	n = 0;
	is_neg = 0;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr++ == 45)
			is_neg = 1;
	}
	while (*nptr)
	{
		if (!(*nptr > 47 && *nptr < 58))
			return (0);
		n = n * 10 + *nptr++ - 48;
		if (n > 2147483648 && is_neg)
			return (0);
		else if (n > 2147483647 && !is_neg)
			return (-1);
	}
	if (is_neg)
		return (-n);
	return (n);
}
