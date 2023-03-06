/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_ptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:31:18 by tevers            #+#    #+#             */
/*   Updated: 2023/03/06 01:33:00 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_ptr_hex(unsigned long long n, char flag)
{
	int	i;

	i = 1;
	if (n == 0)
		return (ft_print_char('0'));
	if (flag == 'x' || flag == 'X')
		n = (unsigned int) n;
	ft_print_ptr_hex(n, flag);
	while (n != 0 && i++)
		n = n / 16;
	return (--i);
}

void	ft_print_ptr_hex(unsigned long long n, char flag)
{
	if (n >= 16)
	{
		ft_print_ptr_hex(n / 16, flag);
		ft_print_ptr_hex(n % 16, flag);
	}
	else
	{
		if ((flag == 'x' && n > 9) || (flag == 'p' && n > 9))
			ft_print_char(n + 87);
		else if (n > 9)
			ft_print_char(n + 55);
		else
			ft_print_char(n + 48);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = ft_print_char('0');
	len += ft_print_char('x');
	return (len += ft_check_ptr_hex(ptr, 'p'));
}
