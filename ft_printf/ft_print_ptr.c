/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 05:06:03 by tevers            #+#    #+#             */
/*   Updated: 2023/03/05 18:25:16 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)

{
	int	len;

	len = write(1, "0x", 2);
	if (ptr == 0)
		return (len + write(1, "0", 1));
	return (len + ft_check_hex(ptr, 'x'));
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;

	memory = (char *)malloc(count * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, count * size);
	return (memory);
}

void ft_memset(void *ptr, int n, size_t len)
{
	size_t	i;

	i = -1;
	while (i < len)
		((char *)ptr)[i] = n;
}
