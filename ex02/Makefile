# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/23 12:57:07 by omizin            #+#    #+#              #
#    Updated: 2025/09/23 16:43:06 by omizin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS_DIR = srcs
OBJS_DIR = objs
INCS_DIR = includes

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17 $(INCLUDE)

INCLUDE = -I$(INCS_DIR)

SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

RM = rm -rf

SRCS := $(addprefix $(SRCS_DIR)/, $(SRCS))

OBJS = $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
