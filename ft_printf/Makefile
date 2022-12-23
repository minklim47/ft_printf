# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: climpras <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 14:03:49 by climpras          #+#    #+#              #
#    Updated: 2022/12/22 22:03:47 by climpras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c \
		print_c.c \
		print_s.c \
		print_p.c \
		print_dni.c \
		print_u.c \
		print_x.c \
		print_xyai.c 

LIBC	= ar -rcs
CC	= gcc -Wall -Werror -Wextra
RM	= rm -rf
OBJS	= $(SRCS:.c=.o)

%o: %c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
