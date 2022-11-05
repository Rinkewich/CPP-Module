# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fardath <fardath@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:31:21 by fardath           #+#    #+#              #
#    Updated: 2022/11/05 20:41:55 by fardath          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
SRC	=	main.cpp Zombie.cpp  newZombie.cpp	randomChump.cpp
CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
HEADERS	=	Zombie.hpp   
OBJ		=	$(SRC:.cpp=.o)
.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)
	
re:
		fclean $(NAME)