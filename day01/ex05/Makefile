NAME =  HARL
CC = c++
RM = rm -rf
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp\
	Harl.cpp\
	

OBJF = $(SRC:.cpp=.opp)

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(FLAGS) $(OBJF) -o $(NAME)

%.opp : %.cpp 
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all