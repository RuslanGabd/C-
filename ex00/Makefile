# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/07 10:40:16 by rgabdrak          #+#    #+#              #
#    Updated: 2025/07/07 10:40:20 by rgabdrak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name
NAME	=	megaphone

#Colors
R			=	"\e[31m"
G			=	"\e[32m"
X			=	"\e[0m"
BOLD		=	"\e[1m"

# Compilation
CC		=	c++
FLAGS	=	$(WFLAGS) $(STDFLAG)
WFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

# Folders and Sources
SRCS	=	megaphone.cpp

$(NAME):	$(SRCS)
		@$(CC) $(FLAGS) -o $@ $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)created$(X)

all:	$(NAME)

clean:

fclean:	clean
		@rm -rf $(NAME)
		@echo $(R)$(BOLD)$(NAME) $(X)$(R)removed $(X)

re:	fclean all

.PHONY: all clean fclean re
