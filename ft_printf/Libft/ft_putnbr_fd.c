/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:25:18 by qmoreau           #+#    #+#             */
/*   Updated: 2022/01/29 17:37:22 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(long int n, int fd)
{
	int			w;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb / 10)
	{
		ft_putnbr_fd((int)(nb / 10), fd);
	}
	w = (nb % 10 + 48);
	write(fd, &w, 1);
}
