# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 17:46:54 by artuda-s          #+#    #+#              #
#    Updated: 2024/04/15 18:58:55 by artuda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wextra -Wall -Werror
SRCS = $(wildcard *.c) 
OBJS = $(SRCS: .c=.o)
BINARY = libft.a
DEPS = libft.h

all: $(BINARY)

$(BINARY): $(OBJS)
	ar rcs $(BINARY) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BINARY)

re: fclean all


