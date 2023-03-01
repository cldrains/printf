/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:31:18 by tevers            #+#    #+#             */
/*   Updated: 2023/03/01 05:49:56 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_hex(unsigned int n, char flag)
{
	int	i;

	i = 1;
	if (n == 0)
		return (write(1, 0, 1));
	ft_print_hex(n, flag);
	while (n != 0 && i++)
		n = n / 16;
	return (--i);
}

void	ft_print_hex(unsigned long long n, char flag)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16, flag);
		ft_print_hex(n % 16, flag);
	}
	else
	{
		if (flag == 'x' && n > 9)
			ft_print_char(n + 87);
		else if (n > 9)
			ft_print_char(n + 55);
		else
			ft_print_char(n + 48);
	}
}
