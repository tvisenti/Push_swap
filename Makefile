# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/23 09:14:08 by tvisenti          #+#    #+#              #
#    Updated: 2016/05/23 09:29:52 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re norme

CC = gcc

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -Iinclude

NAME = push_swap

SRC_PATH = ./src
LIB_PATH = ./lib
INC_PATH = ./inc
OBJ_PATH = ./obj

SRC_NAME =	ft_algo.c\
			ft_check_list.c\
			ft_display.c\
			ft_push.c\
			ft_reverse_rotate.c\
			ft_rotate.c\
			ft_swap.c\
			push_swap.c\

LIB_NAME = 	ft_atoi.c\
			ft_check_double.c\
			ft_isdigit.c\
			ft_lstadd.c\
			ft_lstnew.c\
			ft_puts.c\
			ft_strcat.c\
			ft_strlen.c\

INC_NAME = push_swap.h

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(LIB) $(OBJ) -o $@
	@echo "\033[1;34mpush_swap\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@echo "\033[1;34mpush_swap\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf ./obj $(NAME)
	@echo "\033[1;34mpush_swap\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

norme:
	@norminette $(SRC) $(LIB) $(INC)
	@echo "\033[1;34mpush_swap\t\033[1;33mNorminette\t\033[0;32m[OK]\033[0m"
