# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 11:55:35 by fgiverna          #+#    #+#              #
#    Updated: 2017/08/22 16:02:12 by fgiverna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = do_op.c		\
	  ft_atoi.c		\
	  output.c		\
	  operations.c	\
	  ft_strcmp.c

OBJ = do_op.o		\
	  ft_atoi.o		\
	  output.o		\
	  operations.o	\
	  ft_strcmp.o

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $< $(CFLAGS) -I.

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
