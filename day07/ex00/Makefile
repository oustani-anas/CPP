NAME = Start
RM = rm -rf
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC =	main.cpp\

OBJF = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(FLAGS) $(OBJF) -o $(NAME)

%.o : %.cpp whatever.hpp
	$(CC) $(FLAGS) -c $<  -o $@ 

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all