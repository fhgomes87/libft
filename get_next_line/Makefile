CC = cc
CFLAGS = -Wall -Wextra -Werror -g -D BUFFER_SIZE=42

NAME = get_next_line.a
CFILES = get_next_line.c get_next_line_utils.c
OFILES = $(CFILES:.c=.o)

MAIN = main.c
EXEC = test_gnl

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OFILES): $(CFILES)
	$(CC) $(CFLAGS) -c $(CFILES)

test: $(NAME)
	$(CC) $(CFLAGS) $(MAIN) $(NAME) -o $(EXEC)

run: test
	./$(EXEC)

debug: test
	gdb ./$(EXEC)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME) $(EXEC)

re: fclean all

