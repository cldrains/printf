/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 04:21:13 by tevers            #+#    #+#             */
/*   Updated: 2023/03/01 05:46:39 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

int	ft_check_str(char *str)
{
	if (!str)
		return (ft_print_str("(null)"));
	else
		return (ft_print_str(str));
}

int	ft_print_nbr(int n)
{
	char	*nbr;
	int		len;

	nbr = ft_itoa(n);
	len = ft_print_str(nbr);
	return (free(nbr), len);
}
