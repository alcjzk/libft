NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c
OBJS = $(patsubst %.c,%.o,$(SRCS))
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS): $(SRCS)
	gcc $(FLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: $(OBJS)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all