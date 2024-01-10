CFLAGS = -Wall -Werror -Wextra
CC = cc $(CFLAGS)

SRC_DIR = srcs
INC_DIR = includes

SRCS = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_swap.c
OBJS = $(SRCS:.c=.o)

LIB_NAME = libft.a

all: $(LIB_NAME)

$(LIB_NAME): $(OBJS)
	ar -rcs $(LIB_NAME) $^
	ranlib $(LIB_NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	CC -c $< -I$(INC_DIR) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all

.PHONY: all clean fclean re 
