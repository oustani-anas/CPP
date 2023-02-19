NAME = Array
RM = rm -rf
HEADER = Array.hpp
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC =	main.cpp\

OBJF = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(FLAGS) $(OBJF) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<  -o $@ 

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all