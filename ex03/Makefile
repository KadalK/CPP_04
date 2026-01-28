#-------------------------------- VARIABLES ----------------------------------#

NAME		:=	Materia
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g3
DEPS		:=	-MMD -MP

INCLUDE_DIR	:=	inc
SRC_DIR		:=	src
OBJ_DIR		:=	.build

INCLUDES		= -I $(INCLUDE_DIR)

#-------------------------------- SOURCE FILES -------------------------------#

SRCS		:=	Ice.cpp	\
				Character.cpp	\
				main.cpp	\
				MateriaSource.cpp	\
				AMateria.cpp	\
				Cure.cpp

SRCS_PATH		:=	$(addprefix $(SRC_DIR)/,$(SRCS))


#-------------------------------- OBJECTS ------------------------------------#

OBJS			:=	$(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS_PATH))
DEPENDENCIES	=	$(OBJS:.o=.d)

#-------------------------------- RULES --------------------------------------#


all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) $(DEPS) -c $< -o $@


clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)


re: clean all

-include $(DEPENDENCIES)

.PHONY: all clean fclean re make