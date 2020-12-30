# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/26 19:03:58 by junsekim          #+#    #+#              #
#    Updated: 2020/12/31 00:12:22 by junsekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wextra -Wall -Werror -c

BONUS_SRC= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
			ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJ=$(BONUS_SRC:.c=.o)

SRC= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c \
	ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
	ft_strmapi.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
	ft_toupper.c ft_memcmp.c ft_strncmp.c ft_strlcpy.c \
	ft_putnbr_fd.c

OBJ=$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) $^

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $^

$(BONUS_OBJ) : $(BONUS_SRC)
	$(CC) $(CFLAGS) $^

fclean : clean
	rm -f $(NAME)

re : clean all

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

.PHONY: bonus all clean fclean re
