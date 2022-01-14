/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_perc_x_X.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:26:33 by qmoreau           #+#    #+#             */
/*   Updated: 2022/01/14 17:00:30 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	fct_perc(va_list args)
{
	char	c;

	c = '%';
	write(1, &c, 1);
	return (1);
}

int fct_x(va_list args)
{
	int	nb;

	nb = va_arg(args, int);

}
