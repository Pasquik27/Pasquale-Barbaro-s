# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 14:26:47 by pbarbaro          #+#    #+#              #
#    Updated: 2021/02/10 14:27:00 by pbarbaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC		= ./src/*.c ./libft/*.c

OBJ		= $(SRC:.c=.o)
FLAGS	= gcc -c -Wall -Wextra -Werror
HEADER	= includes/

all: $(NAME)

$(NAME):
	$(FLAGS) -c -I$(HEADER) -I ./libft $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
