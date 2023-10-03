# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 21:39:25 by abouazi           #+#    #+#              #
#    Updated: 2023/09/26 23:32:11 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp ./Serializer.cpp
Header = ./Serializer.hpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

NAME = Serializer

all: $(NAME)

$(NAME): $(OBJ) $(Header)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
