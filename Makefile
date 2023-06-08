# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcordoba <dcordoba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 23:22:51 by dcordoba          #+#    #+#              #
#    Updated: 2023/06/08 23:41:27 by dcordoba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC = \033[39m
AZUL = \033[36m
ROJO = \033[31m
MAGENTA = \033[35m

NAME := libft.a
SRC_DIR := .
BUILD_DIR := .build
SRCS := ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
		ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_tolower.c ft_toupper.c ft_atoi.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c
SRCS := $(SRCS:%=$(SRC_DIR)/%)
BONUS := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS := $(BONUS:%=$(SRC_DIR)/%)
OBJECTS := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS := $(OBJECTS:.o=.d)
BONUS_OBJ := $(BONUS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS_BONUS := $(BONUS_OBJ:.o=.d)

CC := cc
CFLAGS := -Wall -Werror -Wextra
CPPFLAGS := -MMD -MP -I include
DIR_DUP = mkdir -p $(@D)


all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	$(info 🗃️ Packing $(NAME) done!)
	
bonus: $(BONUS_OBJ)
	@ar rcs $(NAME) $^
	$(info 🗃️ Packing bonus done!)
-include $(DEPS_BONUS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@$(DIR_DUP)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info Compilando 📂 $(notdir $<) -> $(notdir $@))
-include $(DEPS) 

clean:
	@/bin/rm -f $(OBJECTS) $(DEPS) $(BONUS_OBJ) $(DEPS_BONUS)
	@echo "$(ROJO)Borrando objetos...🧹$(NC)\n$(OBJECTS) $(BONUS_OBJ)\n"

fclean: clean
	@/bin/rm -f $(NAME) $(NAME_BONUS)
	@echo "$(ROJO)Borrando libreria...🧹$(NC)\n$(NAME)\n"

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re rebonus
