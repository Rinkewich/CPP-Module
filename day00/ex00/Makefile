# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fardath <fardath@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 19:33:50 by fardath           #+#    #+#              #
#    Updated: 2022/11/08 13:52:04 by fardath          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC	=	megaphone.cpp
CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
HEADERS	=	
OBJ		=	$(SRC:.cpp=.o)
.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)
	
re:
		fclean $(NAME)