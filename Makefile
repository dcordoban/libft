# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcordoba <dcordoba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 23:22:51 by dcordoba          #+#    #+#              #
#    Updated: 2023/05/27 12:16:02 by dcordoba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC = \033[39m
AZUL = \033[36m
ROJO = \033[31m
MAGENTA = \033[35m

CC = cc
NAME = libft.a
NAME_BONUS = .bonus
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
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(MAGENTA)Linkeando 🔗\n $(NC)$^\n"
	@ar rcs $(NAME) $^

%.o: %.c $(DEPS)
	@$(CC) $(CFLAGS) -c $< -o $@ -I.
	@echo "$(AZUL)Compilando 📂$(NC) $< -> $@"


bonus: $(NAME_BONUS)

$(NAME_BONUS): $(BONUS_OBJ) $(OBJECTS)
	ar rcs $(NAME) $^
	@echo "$(MAGENTA)Linkenado bonus..\n$(NC)$^"
	@touch .bonus

clean:
	@/bin/rm -f $(OBJECTS) $(BONUS_OBJ)
	@echo "$(ROJO)Borrando objetos...🧹$(NC)\n$(OBJECTS) $(BONUS_OBJ)\n"

fclean: clean
	@/bin/rm -f $(NAME) $(NAME_BONUS)
	@echo "$(ROJO)Borrando libreria...🧹$(NC)\n$(NAME)\n"

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re rebonus
