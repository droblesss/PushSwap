# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drobles <drobles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 18:59:50 by drobles           #+#    #+#              #
#    Updated: 2023/10/24 19:11:54 by drobles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = 	gcc
CFLAGS = -I. -Wall -Wextra -Werror -g3 -fsanitize=address

SRCS = checks.c moves_a.c moves.c nums.c push_swap.c utils.c utils2.c algorithms.c utils3.c
OBJS = $(SRCS:.c=.o)

PRINTF = Ft_Printf/
PRINTFPATH= Ft_Printf/libftprintf.a

.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTFPATH) -L. -o $(NAME)

clean:
	rm -f $(OBJS)
	@$(MAKE) clean -C $(PRINTF)

fclean: clean
	rm -f $(NAME)
	rm -f $(PRINTFPATH)

norme:
	@norminette
re: fclean all