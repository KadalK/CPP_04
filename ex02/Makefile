NAME = AAnimal
CPP= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp Brain.cpp WrongDog.cpp WrongCat.cpp
INCS = AAnimal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp Brain.hpp WrongDog.hpp WrongCat.hpp

$(NAME): $(SRCS) $(INCS) Makefile
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re : clean all

.PHONY: all clean fclean re