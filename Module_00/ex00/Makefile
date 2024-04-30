# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vini <vini@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 11:07:20 by vini              #+#    #+#              #
#    Updated: 2024/04/30 12:22:57 by vini             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
LIB = ar rcs
RM = rm -f
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
# DEBUG = -g3 -fsanitize=address
SRC = megaphone.cpp

OBJ_DIR = ./obj/
OBJ_FILES = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

# COLOURS
DEF_COLOR = \033[0;39m
CUT = \033[K
R = \033[31;1m
G = \033[32;1m
Y = \033[33;1m
B = \033[34;1m
P = \033[35;1m
GR = \033[30;1m
END = \033[0m

# RULES
all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

# executable compiled
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\n$(G)executable compiled$(DEF_COLOR)-> $@\n"

# all .o files, obj directory and executable removed
clean:
	@$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "$(R)All .o files and /obj directory removed$(DEF_COLOR)\n"

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "$(R)Executable removed$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re