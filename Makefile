# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drobles <drobles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 18:59:50 by drobles           #+#    #+#              #
#    Updated: 2023/10/26 12:34:44 by drobles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = 	gcc
CFLAGS = -I. -Wall -Wextra -Werror -g3 -fsanitize=address

SRCS = checks.c moves_a.c moves.c nums.c push_swap.c utils.c utils2.c algorithms.c utils3.c
OBJS = $(SRCS:.c=.o)



.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

norme:
	@norminette
re: fclean all