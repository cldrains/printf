/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:11:01 by tevers            #+#    #+#             */
/*   Updated: 2023/03/01 06:22:17 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;

	memory = (char *)malloc(count * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, count * size);
	return (memory);
}
