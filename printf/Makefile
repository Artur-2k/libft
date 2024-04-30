# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 17:39:57 by artuda-s          #+#    #+#              #
#    Updated: 2024/04/30 17:46:24 by artuda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 
SRCS = ft_printf.c ft_utils.c 
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Werror -Wextra
DEPS = ft_printf.h

.SILENT :

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all