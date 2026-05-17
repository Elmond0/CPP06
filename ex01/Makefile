NAME = serialize

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Serializer.cpp Data.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) && echo "\033[32m✔ $(NAME) created\033[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME) && echo "\033[33m✘ $(NAME) removed\033[0m"

re: fclean all

.PHONY: all clean fclean re
