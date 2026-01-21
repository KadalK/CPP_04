NAME = Animal
CPP= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp WrongAnimal.cpp  WrongDog.cpp WrongCat.cpp
INCS = Animal.hpp Dog.hpp Cat.hpp  Brain.hpp WrongAnimal.hpp WrongDog.hpp WrongCat.hpp

$(NAME): $(SRCS) $(INCS) Makefile
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re : clean all

.PHONY: all clean fclean re