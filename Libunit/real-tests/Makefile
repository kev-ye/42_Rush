# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 22:35:18 by kaye              #+#    #+#              #
#    Updated: 2022/01/08 23:18:07 by kaye             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION

CC		= clang
CFLAGS	= -Wall -Wextra -Werror #-g3 -fsanitize=address
IFLAGS	= -I. -I./libft/inc -I../framework/inc
BFLAGS	= 0

# DIRECTORIES

BUILD 			:= .build
SRC_DIR 		:= strlen
OBJ_DIR 		:= $(BUILD)/obj
DIRS			:= $(OBJ_DIR) $(addprefix $(OBJ_DIR)/, $(SRC_DIR))

# FILES

NAME			:= tests
SRC				= main.c
SUB_SRC			:= 00_strlen_launcher.c \
				   01_strlen_basic_test.c
SRC				+= $(addprefix strlen/, $(SUB_SRC))
OBJ				:= $(SRC:%.c=$(OBJ_DIR)/%.o)

# ANSCII CODE

NONE			= \033[0m
CL_LINE			= \033[2K
B_BLACK			= \033[1;30m
B_RED			= \033[1;31m
B_GREEN			= \033[1;32m
B_YELLOW		= \033[1;33m
B_BLUE			= \033[1;34m
B_MAGENTA 		= \033[1;35m
B_CYAN 			= \033[1;36m

# MAKEFILE

test: $(NAME)

$(NAME): $(OBJ)
	@printf "$(CL_LINE)"
	@$(MAKE) -C ./libft
	@cp ./libft/libft.a .
	@$(MAKE) -C ../framework
	@cp ../framework/libunit.a .
	@$(CC) $(CFLAGS) $(IFLAGS) $(OBJ) -o $@ libft.a libunit.a
	@echo "[1 / 1] - $(B_MAGENTA)$@$(NONE)"

clean:
	@$(MAKE) -C ./libft clean
	@$(MAKE) -C ../framework clean
	@rm -Rf $(BUILD)
	@echo "$(B_RED)$(BUILD)$(NONE) : $(B_GREEN)Delete$(NONE)"

fclean: clean
	@$(MAKE) -C ./libft fclean
	@$(MAKE) -C ../framework fclean
	@rm -Rf libft.a
	@rm -Rf libunit.a
	@rm -Rf $(NAME)
	@echo "$(B_RED)$(NAME)$(NONE) : $(B_GREEN)Delete$(NONE)"

re: fclean test

.PHONY: test clean fclean re

$(BUILD):
	@mkdir $@ $(DIRS)

$(OBJ_DIR)/%.o:%.c | $(BUILD)
	@printf "$(CL_LINE)Compiling srcs object : $(B_CYAN)$< $(NONE)...\r"
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@ -D BONUS=$(BFLAGS)