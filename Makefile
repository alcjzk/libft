NAME = libft.a
SRCS = ft_isalpha.c
OBJS = $(patsubst %.c,%.o,$(SRCS))
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS): $(SRCS)
	gcc $(FLAGS) -c $(SRCS) -o $(OBJS)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: $(OBJS)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all