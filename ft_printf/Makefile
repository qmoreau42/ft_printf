# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/06 14:04:05 by qmoreau           #+#    #+#              #
#    Updated: 2022/01/19 16:23:56 by qmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c\
	   ft_printf_c_s_i.c\
	   ft_printf_perc_x_X.c\
	   ft_printf_p_d_u.c


OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
			cd Libft && $(MAKE) bonus
			cp Libft/libft.a $(NAME)
			ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C ./Libft

fclean : clean
		rm -f $(NAME)
		rm -f libft.a
		$(MAKE) fclean -C ./Libft

re : fclean all

.PHONY : fclean clean re all
