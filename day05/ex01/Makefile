# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fardath <fardath@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:31:21 by fardath           #+#    #+#              #
#    Updated: 2022/11/21 20:19:48 by fardath          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
SRC	=	main.cpp Bureaucrat.cpp Form.cpp
CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
HEADERS	=  Bureaucrat.hpp Form.hpp
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