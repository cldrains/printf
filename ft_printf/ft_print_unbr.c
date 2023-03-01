/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 05:30:54 by tevers            #+#    #+#             */
/*   Updated: 2023/03/01 05:50:20 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		++len;
		num = num / 10;
	}
	return (len);
}

char	*toa(unsigned int n)
{
	char	*num;
	int		len;

	len = numlen(n);
	num = (char *)ft_calloc(sizeof(char) * (len + 1), 1);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		--len;
	}
	return (num);
}

int	ft_print_unbr(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = toa(n);
		len += ft_print_str(num);
		free(num);
	}
	return (len);
}
