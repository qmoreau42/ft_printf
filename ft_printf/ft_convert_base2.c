/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:27:33 by qmoreau           #+#    #+#             */
/*   Updated: 2021/08/26 18:17:21 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_atoi_base(char *str, char *base);
int	checkbase(char *base);
int	ft_strlen(char *str);

void	ft_putnbr_base(long nbr, char *base, char *dest, int i)
{
	long	max;

	max = i;
	i--;
	while (i >= 0)
	{
		dest[i] = base[nbr % ft_strlen(base)];
		nbr = nbr / ft_strlen(base);
		i--;
	}
	dest[max] = '\0';
}

long	ft_abs(long nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	return (nb);
}

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	long	nb;
	char	*dest;
	long	nbval;

	if (checkbase(base_to) == 0 || checkbase(base_from) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	nbval = ft_abs(nb);
	i = ft_len_nbr(nbval, base_to);
	if (nb < 0)
	{
		dest = malloc(sizeof(*dest) * (i + 2));
		dest[0] = '-';
		nb = -nb;
		ft_putnbr_base(nb, base_to, dest + 1, i);
	}
	else
	{
		dest = malloc(sizeof(*dest) * (i + 1));
		ft_putnbr_base(nb, base_to, dest, i);
	}
	return (dest);
}
