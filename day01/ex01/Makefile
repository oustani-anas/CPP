
NAME = Zombie
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
HEADER = Zombie.hpp
SRC = main.cpp\
	Zombie.cpp\
	zombieHorde.cpp\

OBJF = $(SRC:.cpp=.opp)

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(FLAGS) $(OBJF) -o $(NAME)

%.opp : %.cpp $(HEADER)
	$(CC) $(FLAGS) -o $@ -c $<

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re: fclean all