NAME = violence
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
.SECONDARY: $(OBJ)