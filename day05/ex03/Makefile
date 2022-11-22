# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fardath <fardath@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:31:21 by fardath           #+#    #+#              #
#    Updated: 2022/11/22 14:46:32 by fardath          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
SRC	=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
HEADERS	=  Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
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