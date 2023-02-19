
NAME = UnnecessaryViolence
CC = c++
RM = rm -rf
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp\
	main.cpp\

OBJF = $(SRC:.cpp=.opp)

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(FLAGS) $(OBJF) -o $(NAME)

%.opp : %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all