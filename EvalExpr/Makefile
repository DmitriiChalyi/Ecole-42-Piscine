# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcamila <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/15 19:39:50 by vcamila           #+#    #+#              #
#    Updated: 2020/03/15 20:12:27 by vcamila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = ./includes/*.c
HEAD = ./includes/*.h

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -I $(HEAD) -c $(SRC)
	gcc $(FLAGS) *.o -o $(NAME)

clean:
	/bin/rm -f *.o

fclean :clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
