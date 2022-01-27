/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_perc_x_X.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:26:33 by qmoreau           #+#    #+#             */
/*   Updated: 2022/01/20 15:46:45 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

void	ft_putnbr_base(unsigned long long nbr, char *base, char *dest, int i)
{
	i--;
	while (i >= 0)
	{
		dest[i] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
		i--;
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

	nb = va_arg(args, long);
	len = ft_len_nbr(nb, "0123456789abcdef");
	str = malloc(sizeof(*str) * (len + 1));
	ft_putnbr_base(nb, "0123456789abcdef", str, len);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

int	fct_x_sup(va_list args)
{
	long	nb;
	char	*str;
	int		len;

	nb = va_arg(args, long);
	len = ft_len_nbr(nb, "0123456789ABCDEF");
	str = malloc(sizeof(*str) * (len + 1));
	ft_putnbr_base(nb, "0123456789ABCDEF", str, len);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
