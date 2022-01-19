/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p_d_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:14:16 by qmoreau           #+#    #+#             */
/*   Updated: 2022/01/19 16:24:25 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

int	fct_p(va_list args)
{

}

int	fct_d(va_list args)
{
	long int	nb;
	int			ret;

	ret = 0;
	nb = (long)va_arg(args, int);
	if (nb < 0)
	{
		nb = -nb;
		ret = 1;
		write(1, "-", 1);
	}
	ft_putnbr_fd(nb, 1);
	return (ft_len_nbr(nb, "0123456789") + ret);
}

int	fct_u(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	ft_putnbr_fd(nb, 1);
	return (ft_len_nbr(nb, "0123456789"));

}
