# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 19:11:09 by athonda           #+#    #+#              #
#    Updated: 2025/04/15 19:12:39 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC_DIR = src
SRC_F	=	PhoneBook.cpp \
			Contact.cpp \
			main.cpp

SRC = $(SRC_F:%.c=%.c)

OBJ_DIR = obj
OBJ =	$(patsubst %.cpp,%.o,$(SRC_F))

INC_DIR = inc
DEP = $(patsubst %.cpp,%.hpp,$(SRC_F))

IFLAGS = -Iinc
CFLAGS = -g -std=c++98 -Wall -Werror -Wextra
CC = c++

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(DEP)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
