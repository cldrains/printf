/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:04:54 by tevers            #+#    #+#             */
/*   Updated: 2023/03/06 01:36:06 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int			ft_check_ptr_hex(unsigned long long n, char flag);
void		ft_print_ptr_hex(unsigned long long n, char flag);
int			ft_check_flag(va_list args, const char flag);
int			ft_print_ptr(unsigned long long ptr);
char		*ft_toa(long nb, char *str, int len);
int			ft_printf(const char *str, ...);
int			ft_print_unbr(unsigned int n);
int			ft_print_str(char *str);
int			ft_check_str(char *str);
int			ft_print_char(int n);
int			ft_print_nbr(int n);
int			ft_len(long nbr);
char		*ft_itoa(int n);

#endif
