# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vini <vini@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 14:08:30 by vipalaci          #+#    #+#              #
#    Updated: 2024/06/25 21:25:39 by vini             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
LIB = ar rcs
RM = rm -f
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
# DEBUG = -g3 -fsanitize=address
SRC = main.cpp Harl.cpp

OBJ_DIR = ./obj/
OBJ_FILES = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

HEADER = Harl.hpp

# COLOURS
DEF_COLOR = \033[0;39m
CUT = \033[K
RED = \033[31;1m
GREEN = \033[32;1m
YELLOW = \033[33;1m
BLUE = \033[34;1m
PURPLE = \033[35;1m
GREY = \033[30;1m
END = \033[0m

# RULES
all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:%.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

# executable compiled
$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\n$(GREEN)executable compiled$(DEF_COLOR)-> $@\n"

# all .o files, obj directory and executable removed
clean:
	@$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)All .o files and /obj directory removed$(DEF_COLOR)\n"

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Executable removed$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re
