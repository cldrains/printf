/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:13:47 by tevers            #+#    #+#             */
/*   Updated: 2023/03/01 06:10:16 by tevers           ###   ########.fr       */
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
		len += ft_print_char(va_arg(args, int));					//%c Prints a single character.
	else if (flag == 's')
		len += ft_print_str(va_arg(args, char *));					//• %s Prints a string (as defined by the common C convention).
	else if (flag == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));		//• %p The void * pointer argument has to be printed in hexadecimal format.
	else if (flag == 'd' || flag == 'i')
		len += ft_print_nbr(va_arg(args, int));					//%d%i Prints a decimal (base 10) number.
	else if (flag == 'u')
		len += ft_print_unbr(va_arg(args, unsigned int));			//• %u Prints an unsigned decimal (base 10) number.
	else if (flag == 'x' || flag == 'X')
		len += ft_check_hex(va_arg(args, int), flag);				//• %x Prints a number in hexadecimal (base 16)
	else if (flag == '%')
		len += ft_print_char('%');									//• %c Prints a single character.
	return (len);
}

int	ft_print_char(int n)
{
	return (write(1, &n, 1), 1);
}
