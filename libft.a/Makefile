# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/01 11:50:07 by nspivak           #+#    #+#              #
#    Updated: 2026/11/02 15:48:42 by nspivak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = srcs
INC = includes

SRCS = srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/f.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@


$(NAME): $(OBJS)
		ar -rcs	$(NAME) $(OBJS)
		ranlib	$(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
