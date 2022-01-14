/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c_s_i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:32:29 by qmoreau           #+#    #+#             */
/*   Updated: 2022/01/14 14:59:16 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

long	ft_len_nbr(long nbr, char *base)
{
	int	i;

	i = 0;
	while (nbr >= ft_strlen(base))
	{
		nbr = nbr / ft_strlen(base);
		i++;
	}
	return (i + 1);
}

int	my_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}

int	fct_c(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	fct_s(va_list args)
{
	char	*s;
	int		ret;

	s = va_arg(args, char*);
	ret = my_putstr_fd(s, 1);
	return (ret);
}

int	fct_i(va_list args)
{
	int	nb;
	int ret;

	nb = va_arg(args, int);
	ft_putnbr_fd(nb, 1);
	ret = ft_len_nbr((long)nb, "0123456789");
	if (nb < 0)
		ret++;
	return (ret);
}

/*
int	fct_p(va_list args)
{
	
}
*/
