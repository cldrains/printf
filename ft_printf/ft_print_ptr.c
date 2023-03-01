/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 05:06:03 by tevers            #+#    #+#             */
/*   Updated: 2023/03/01 05:38:50 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)

{
	int	len;

	len = write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
		len += ft_check_hex(ptr, 'x');
	return (len);
}
