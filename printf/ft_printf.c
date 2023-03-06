/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:13:47 by tevers            #+#    #+#             */
/*   Updated: 2023/03/06 01:08:34 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = -1;
	len = 0;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			len += ft_check_flag(args, str[++i]);
		else
			len += ft_print_char(str[i]);
	}
	va_end(args);
	return (len);
}

int	ft_check_flag(va_list args, const char flag)
{
	int	len;

	len = 0;
	if (flag == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (flag == 's')
		len += ft_print_str(va_arg(args, char *));
	else if (flag == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (flag == 'd' || flag == 'i')
		len += ft_print_nbr(va_arg(args, int));
	else if (flag == 'u')
		len += ft_print_unbr(va_arg(args, unsigned int));
	else if (flag == 'x' || flag == 'X')
		len += ft_check_ptr_hex(va_arg(args, int), flag);
	else if (flag == '%')
		len += ft_print_char('%');
	return (len);
}
