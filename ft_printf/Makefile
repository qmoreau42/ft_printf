# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qmoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/06 14:04:05 by qmoreau           #+#    #+#              #
#    Updated: 2022/01/07 15:15:05 by qmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c\
	   ft_printf_utils\
	   atoibase.c

OBJS = $(SRCS:.c=.o)

$(NAME) = $(OBJS)
			cd Libft && $(MAKE)
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

%.o: %.c
	$(CC) $(FLAGS) -I ft_printf.h -c $<  -o $(<:.c=.o)

.PHONY : fclean clean re all
