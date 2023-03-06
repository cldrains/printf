/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 04:21:13 by tevers            #+#    #+#             */
/*   Updated: 2023/03/06 01:35:59 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_strl(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_print_char(str[i]);
	return (i);
}

int	ft_print_str(char *str)
{
	if (str == NULL)
		return (ft_print_strl("(null)"));
	return (ft_print_strl(str));
}

int	ft_print_char(int c)
{
	return (write(1, &c, 1), 1);
}
