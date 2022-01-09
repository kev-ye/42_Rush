# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 22:35:18 by kaye              #+#    #+#              #
#    Updated: 2022/01/09 17:21:57 by kaye             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION

CC		= clang
CFLAGS	= -Wall -Wextra -Werror #-g3 -fsanitize=address
IFLAGS	= -I. -I./libft/inc -I../framework/inc

# DIRECTORIES

BUILD 			:= .build
LFT_DIR			:= ./libft
LUNIT_DIR		:= ../framework
SRC_DIR 		:= strlen
OBJ_DIR 		:= $(BUILD)/obj
DIRS			:= $(OBJ_DIR) $(addprefix $(OBJ_DIR)/, $(SRC_DIR))

# FILES

LFT				:= libft.a
LUNIT			:= libunit.a
NAME			:= real_tests
SRC				:= main.c
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
	@echo "$(B_BLUE)>>> Libft$(NONE)"
	@$(MAKE) -C $(LFT_DIR)
	@cp $(LFT_DIR)/$(LFT) .
	@echo "$(B_BLUE)>>> Libunit$(NONE)"
	@$(MAKE) -C $(LUNIT_DIR)
	@cp $(LUNIT_DIR)/$(LUNIT) .
	@echo "$(B_BLUE)>>> Tests$(NONE)"
	@$(CC) $(CFLAGS) $(IFLAGS) $(OBJ) -o $@ $(LFT) $(LUNIT)
	@echo "[1 / 1] - $(B_MAGENTA)$@$(NONE)"

clean:
	@$(MAKE) -C $(LFT_DIR) clean 1>/dev/null
	@$(MAKE) -C $(LUNIT_DIR) clean 1>/dev/null
	@rm -Rf $(BUILD)
	@echo "$(B_RED)OBJ$(NONE) : $(B_GREEN)Delete$(NONE)"

fclean: clean
	@$(MAKE) -C $(LFT_DIR) fclean
	@$(MAKE) -C $(LUNIT_DIR) fclean
	@rm -Rf $(LFT)
	@rm -Rf $(LUNIT)
	@rm -Rf $(NAME)
	@echo "$(B_RED)$(NAME)$(NONE) : $(B_GREEN)Delete$(NONE)"

re: fclean test

.PHONY: test clean fclean re

$(BUILD):
	@mkdir $@ $(DIRS)

$(OBJ_DIR)/%.o:%.c | $(BUILD)
	@printf "$(CL_LINE)Compiling srcs object : $(B_CYAN)$< $(NONE)...\r"
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@