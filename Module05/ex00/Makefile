# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 16:55:26 by abouazi           #+#    #+#              #
#    Updated: 2023/08/26 17:10:16 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./Bureaucrat.cpp ./main.cpp
Header = ./Bureaucrat.hpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

NAME = Bureaucrat

all: $(NAME)

$(NAME): $(OBJ) $(Header)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
