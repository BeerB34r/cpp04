CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -g
SRC				=	main.cpp IceMateria.cpp CureMateria.cpp AMateria.cpp ICharacter.cpp Character.cpp IMateriaSource.cpp MateriaSource.cpp
OBJ				=	$(SRC:.cpp=.o)
NAME			=	FinalFantasy42

.DEFAULT_GOAL	=	$(NAME)

all				:	$(NAME)

$(NAME)			:	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean			:
	$(RM) $(OBJ)

fclean			:
	$(MAKE) clean
	$(RM) $(NAME)

re				:
	$(MAKE) fclean
	$(MAKE)


.PHONY			:	clean fclean re all
