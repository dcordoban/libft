# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcordoba <dcordoba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 23:22:51 by dcordoba          #+#    #+#              #
#    Updated: 2023/05/18 21:52:42 by dcordoba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
SRCS = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
		ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_tolower.c ft_toupper.c ft_atoi.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c
CFLAGS = -Wall -Werror -Wextra
DEPS = libft.h
OBJECTS = $(SRCS:.c=.o)
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS) $(DEPS)
	$(CC) $(CFLAGS) $(DEPS) -c $(SRCS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

bonus: $(BONUS) $(DEPS)
	$(CC) $(CFLAGS) $(DEPS) -c $(BONUS)
	ar -rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus
