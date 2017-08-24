# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 11:55:35 by fgiverna          #+#    #+#              #
#    Updated: 2017/08/22 16:00:20 by fgiverna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = srcs/do_op.c		\
	  srcs/ft_atoi.c		\
	  srcs/output.c		\
	  srcs/operations.c

OBJ = do_op.o		\
	  ft_atoi.o		\
	  output.o		\
	  operations.o

INC = includes/

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: srcs/%.c
	$(CC) -c $< $(CFLAGS) -I$(INC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
