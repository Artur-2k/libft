NAME	= libftprintf.a
SRCS	= ft_printf.c utils.c
OBJS	= $(SRCS:.c=.o)
CC		= cc
FLAGS	= -Wall -Werror -Wextra
DEPS	= ft_printf.h

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all