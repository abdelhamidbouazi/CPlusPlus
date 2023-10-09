# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 21:39:25 by abouazi           #+#    #+#              #
#    Updated: 2023/10/09 02:11:41 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp
Header = ./Array.hpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

NAME = array

all: $(NAME)

$(NAME): $(OBJ) $(Header)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
