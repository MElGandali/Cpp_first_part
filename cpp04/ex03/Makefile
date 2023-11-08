NAME = Interface
CPP = c++
FLAGCPP = -Wall -Wextra -Werror
FLAGCPP98 = -std=c++98
SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp IMateriaSource.cpp ICharacter.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGCPP) $(FLAGCPP98) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGCPP) $(FLAGCPP98) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all