# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fardath <fardath@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 19:33:50 by fardath           #+#    #+#              #
#    Updated: 2022/11/01 20:47:00 by fardath          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC	=	megaphone.cpp
CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ		=	$(SRC:.cpp=.o)
.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)
	
re:
		fclean $(NAME)