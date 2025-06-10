NAME = push_swap

SRC = main.c \
      stack.c \
      operation/push.c operation/reverse_rotate.c operation/rotate.c operation/swap.c \
      stack_utils.c \
			second_stack_utils.c \
      free_stack.c \
			parsing.c \
			short_sort.c \
			long_sort.c \
		ft_printf/ft_print_ptr.c ft_printf/ft_printf.c ft_printf/ft_put_unsigned.c \
		ft_printf/ft_putchar.c ft_printf/ft_puthex.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c \
		ft_split.c \


OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "✅ Compilation terminée !"

clean:
	rm -f $(OBJ)

fclean: clean
	@echo "⏳ Suppression en cours..."
	@rm -f $(NAME)
	@echo "✅ Tout est propre !"

re: fclean all

.PHONY: all clean fclean re
