/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_perc_x_X.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:26:33 by qmoreau           #+#    #+#             */
/*   Updated: 2022/02/16 18:10:24 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

void	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nbr < len)
		ft_putchar_fd(base[nbr], 1);
	else
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
}

int	fct_perc(va_list args)
{
	char	c;

	c = '%';
	write(1, &c, 1);
	return (1);
}

int	fct_x(va_list args)
{
	long	nb;
	char	*str;
	int		len;

	nb = va_arg(args, unsigned int);
	len = ft_len_nbr(nb, "0123456789abcdef");
	ft_putnbr_base(nb, "0123456789abcdef");
	return (len);
}

int	fct_x_sup(va_list args)
{
	long	nb;
	char	*str;
	int		len;

	nb = va_arg(args, unsigned int);
	len = ft_len_nbr(nb, "0123456789ABCDEF");
	ft_putnbr_base(nb, "0123456789ABCDEF");
	return (len);
}
