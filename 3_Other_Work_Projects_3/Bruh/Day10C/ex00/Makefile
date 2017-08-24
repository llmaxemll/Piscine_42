# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 11:24:30 by fgiverna          #+#    #+#              #
#    Updated: 2017/08/22 15:40:08 by fgiverna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c \
	  srcs/ft_swap.c	\
	  srcs/ft_putstr.c	\
	  srcs/ft_strlen.c	\
	  srcs/ft_strcmp.c

OBJ = ft_putchar.o	\
	  ft_swap.o		\
	  ft_putstr.o	\
	  ft_strlen.o	\
	  ft_strcmp.o

INC = includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: srcs/%.c
	$(CC) -c $< -I$(INC) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
