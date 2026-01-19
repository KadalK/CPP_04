#-------------------------------- VARIABLES ----------------------------------#

NAME		:=	Materia
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
MAKEFLAGS	+=	-j $$(nproc)
DEPS		:=	-MMD -MP

INCLUDE_DIR	:=	inc
SRC_DIR		:=	src
OBJ_DIR		:=	.build

INCLUDES		= -I $(INCLUDE_DIR)

#-------------------------------- SOURCE FILES -------------------------------#

SRCS		:=	AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp main.cpp
SRCS		:=	$(addprefix $(SRC_DIR)/,$(SRCS))


#-------------------------------- OBJECTS ------------------------------------#

OBJS			:=	$(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))
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


re: fclean all

-include $(DEPENDENCIES)

.PHONY: all clean fclean re