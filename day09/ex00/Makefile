
NAME = btc
RM = rm -rf
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC =	main.cpp\
		BitcoinExchange.cpp

OBJF = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJF) 
	$(CC) $(FLAGS) $(OBJF) -o $(NAME)

%.o : %.cpp BitcoinExchange.hpp
	$(CC) $(FLAGS) -c $<  -o $@ 

clean :
	$(RM) $(OBJF)

fclean : clean
	$(RM) $(NAME)

re : fclean all