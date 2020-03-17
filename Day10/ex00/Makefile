# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcamila <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 12:57:42 by vcamila           #+#    #+#              #
#    Updated: 2020/03/09 14:49:07 by vcamila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a
FILES = srcs/ft_putchar.c srcs/ft_putstr.c \
	srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = ./includes/

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(FILES) -I $(HEADERS)
	ar rc libft.a $(OBJ)
	ranlib $(NAME)
clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re