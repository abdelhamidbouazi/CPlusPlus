# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 10:28:42 by abouazi           #+#    #+#              #
#    Updated: 2023/05/25 14:38:32 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp ./AAnimal.cpp ./Dog.cpp ./Cat.cpp ./WrongAnimal.cpp ./WrongCat.cpp ./Brain.cpp
Header = ./AAnimal.hpp ./Dog.hpp ./Cat.hpp ./WrongAnimal.hpp ./WrongCat.hpp ./Brain.hpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

NAME = AAnimals

all: $(NAME)

$(NAME): $(OBJ) $(Header)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
