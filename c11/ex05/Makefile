# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 14:35:02 by tharnaud          #+#    #+#              #
#    Updated: 2022/09/28 18:56:03 by tharnaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = *.c

CFLAGS = -Wall -Wextra -Werror

$(NAME):
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f *.o

fclean:
	@rm -f $(NAME)

re: fclean $(NAME)

all: $(NAME)
