# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 16:55:26 by abouazi           #+#    #+#              #
#    Updated: 2023/09/15 22:32:42 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./Bureaucrat.cpp ./AForm.cpp ./ShrubberyCreationForm.cpp ./RobotomyRequestForm.cpp ./PresidentialPardonForm.cpp ./Intern.cpp ./main.cpp
Header = ./Bureaucrat.hpp ./ShrubberyCreationForm.hpp ./RobotomyRequestForm.hpp ./PresidentialPardonForm.hpp ./Intern.hpp ./AForm.hpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

NAME = Intern

all: $(NAME)

$(NAME): $(OBJ) $(Header)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
