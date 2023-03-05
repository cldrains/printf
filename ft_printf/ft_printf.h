/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:04:54 by tevers            #+#    #+#             */
/*   Updated: 2023/03/05 20:02:33 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

void		*ft_calloc(size_t count, size_t size);
void		ft_memset(void *ptr, int n, size_t len);
int			ft_print_ptr(unsigned long long ptr);
int			ft_print_str(char *str);
int			ft_check_str(char *str);
int			ft_print_nbr(int n);
int			ft_printf(const char *str, ...);
int			ft_check_flag(va_list args, const char flag);
int			ft_print_char(int n);
int			ft_len(int nbr);
char		*ft_toa(long nb, char *str, int len);
char		*ft_itoa(int n);
int			ft_check_hex(unsigned int n, char flag);
void		ft_print_hex(unsigned long long n, char flag);
int			ft_ulen(unsigned int num);
int			ft_print_unbr(unsigned int n);

#endif
