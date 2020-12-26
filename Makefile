# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/26 19:03:58 by junsekim          #+#    #+#              #
#    Updated: 2020/12/27 01:36:32 by junsekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
INCLUDES = ./
CFLAGS = -Wextra -Wall -Werror -c

BONUS_SRC= $(wildcard *lst*.c)
BONUS_OBJ=$(BONUS_SRC:.c=.o)
SRC=$(filter-out $(BONUS_SRC),$(wildcard *.c))
OBJ=$(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) $^

bonus: $(NAME) $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

$(BONUS_OBJ) : $(BONUS_SRC)
	$(CC) $(CFLAGS) $^

fclean : clean
	rm -f $(NAME)

re : clean all

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

.PHONY: bonus all clean fclean re

so:
	$(CC) -fPIC $(CFLAGS) $(SRC) $(BONUS_SRC)
	gcc -shared -o libft.so $(OBJ) $(BONUS_OBJ)


