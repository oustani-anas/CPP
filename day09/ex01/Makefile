
NAME = RPN
RM = rm -rf
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp\
		RPN.cpp\

OBJF = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJF) 
	$(CC) $(CFLAGS) $(OBJF) -o $(NAME)

%.o : %.cpp RPN.hpp
	$(CC) $(CFLAGS) -c $<  -o $@ 

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all