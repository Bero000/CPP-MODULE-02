NAME = Fixed

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

s: re
	@./Fixed
	@make f

c:clean
f:fclean
r:re
