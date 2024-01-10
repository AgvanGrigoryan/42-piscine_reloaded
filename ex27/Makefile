CFLAGS = -Wall -Werror -Wextra
CC = cc $(CFLAGS)

SRC = ft_display_file.c
OBJ = ft_display_file.o
EXECUTABLE = ft_display_file

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $< -o $(EXECUTABLE)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all

.PHONY: all clean fclean re
