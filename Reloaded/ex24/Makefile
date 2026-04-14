NAME = myshit

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:.c=.o)

INC_DIR = include
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CFLAGS +=

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -O $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all