/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:37:08 by nle-bret          #+#    #+#             */
/*   Updated: 2022/01/20 15:48:50 by qmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

long int my_read(const char *format, long int pos, long int *ret)
{
	while (format[pos] != '%' && format[pos])
	{
		write(1, &format[pos], 1);
		pos++;
		*ret = *ret + 1;
	}
	return (pos);
}


int	filter(const char *format, long int pos, va_list args)
{
	if (format[pos + 1] == '\0')
		return (0);
	else if (format[pos + 1] == 'c')
		return (fct_c(args));
	else if (format[pos + 1] == 's')
		return (fct_s(args));
	else if (format[pos + 1] == 'p')
		return (fct_p(args));
	else if (format[pos + 1] == 'd')
		return (fct_d(args));
	else if (format[pos + 1] == 'i')
		return (fct_i(args));
	else if (format[pos + 1] == 'u')
		return (fct_u(args));
	else if (format[pos + 1] == 'x')
		return (fct_x(args));
	else if (format[pos + 1] == 'X')
		return (fct_x_sup(args));
	else if (format[pos + 1] == '%')
		return (fct_perc(args));
	write(1, &format[pos + 1], 1);
	return (1);
}

int ft_printf(const char *format, ...)
{
	va_list				args;
	long int			ret;
	long unsigned int	pos;

	va_start(args, format);
	pos = 0;
	ret = 0;
	while (pos < ft_strlen(format))
	{
		pos = my_read(format, pos, &ret);
		if (pos < ft_strlen(format))
			ret += filter(format, pos, args);
		pos = pos + 2;
	}
	va_end(args);
	return (ret);
}

int fct(const char *format, ...)
{
	//long int	pos;
	//long int	ret;
	va_list		ap;
	char		*aw;
	int 		az;

	va_start(ap, format);
	aw = va_arg(ap, char*);
	az = va_arg(ap, int);
	//az = va_arg(ap, char*);
	va_end(ap);
	//pos = 0;
	//ret = 0;
	//pos = my_read(format, pos, &ret);
	//printf("--%ld--10--\n--%ld--10--", pos, ret);
	printf("%s\n%d", aw, az);
	return (0);
	
}

int	main(void)
{
	int	ret;
	char	a;
	//char		str[30] = "0123456789jhgs;defiug%";

	a = 's';
	printf("%p\n%u\n", &a, 123);
	ret = ft_printf("%p\n%u\n", &a, 123);
	printf("%d", ret);
	//fct(str, 56, "coucou", 56);
	return (0);
}
