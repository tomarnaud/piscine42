# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 15:40:25 by tharnaud          #+#    #+#              #
#    Updated: 2022/09/28 10:45:53 by tharnaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJ = $(SRCS:.c=.o)

HEAD = includes/

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

.c.o:
	cc $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME) 

.PHONY: all clean fclean re
