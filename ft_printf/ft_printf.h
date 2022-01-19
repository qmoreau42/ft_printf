/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:58:22 by qmoreau           #+#    #+#             */
/*   Updated: 2022/01/19 16:22:39 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

long	ft_len_nbr(long nbr, char *base);
int		fct_c(va_list args);
int		fct_s(va_list args);
int		fct_d(va_list args);
int		fct_i(va_list args);
int		fct_u(va_list args);
int		fct_x(va_list args);
int		fct_x_sup(va_list args);
int		fct_perc(va_list args);
int		ft_printf(const char *format, ...);
int		ft_atoi_base(char *str, char *base);


#endif
