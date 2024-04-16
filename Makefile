# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 17:46:54 by artuda-s          #+#    #+#              #
#    Updated: 2024/04/16 18:05:55 by artuda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wextra -Wall -Werror
SRCS = $(wildcard *.c) 
OBJS = $(SRCS:.c=.o)
BINARY = libft.a
DEPS = libft.h

.SILENT:

all: $(BINARY)

$(BINARY): $(OBJS)
	ar rcs $(BINARY) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(BINARY)

re: fclean all