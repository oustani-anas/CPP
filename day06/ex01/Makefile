NAME = Serialization
RM = rm -rf
CC = c++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp\
		Serializer.cpp\

OBJ_F = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ_F)
	$(CC) $(FLAGS) $(OBJ_F) -o $(NAME)

%.o : %.cpp Serializer.hpp
	$(CC) $(FLAGS) -c $<

clean :
	$(RM) $(OBJ_F)

fclean : clean
	$(RM) $(NAME)

re : fclean all