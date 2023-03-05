/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 04:49:49 by tevers            #+#    #+#             */
/*   Updated: 2023/03/05 20:03:37 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int nbr)
{
	int		len;

	len = 1;
	if (nbr == 0)
		return (len);
	while (nbr < 0 && len++)
		nbr = nbr * -1;
	while (nbr > 0 && len++)
		nbr = nbr / 10;
	return (--len);
}

char	*ft_toa(long nb, char *str, int len)
{
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[len--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = ft_len(n);
	str = ft_calloc(sizeof(char) * len + 1, 1);
	str[len--] = '\0';
	str = ft_toa(nb, str, len);
	return (str);
}
