/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 05:30:54 by tevers            #+#    #+#             */
/*   Updated: 2023/03/05 20:04:09 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ulen(unsigned int nbr)
{
	int	i;

	i = 1;
	while (nbr != 0 && i++)
		nbr = nbr / 10;
	return (--i);
}

int	ft_print_unbr(unsigned int nbr)
{
	char	*str;
	int		i;
	int		len;

	if (nbr == 0)
		return (write(1, "0", 1));
	len = ft_ulen(nbr);
	str = ft_calloc(sizeof(char) * (len + 1), 1);
	str[len] = '\0';
	while (nbr != 0)
	{
		str[--len] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	i = ft_print_str(str);
	return (free(str), i);
}
