# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 16:20:27 by cdapurif          #+#    #+#              #
#    Updated: 2021/09/17 21:49:42 by cdapurif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	push_swap.c \
		error_management.c \
		utils.c \
		utils2.c \
		algo.c \
		swap.c \
		push.c \
		rotate.c \
		reverse.c \
		sort.c \
		chunks.c

OBJS = $(addprefix srcs/,$(SRCS:.c=.o))

CC = gcc

CFLAGS = -Wall -Wextra -Werror

FT = -L libft -lft

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/ bonus
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FT)

clean:
	$(RM) $(OBJS)
	make -C libft/ clean

fclean: clean
	$(RM) $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re
