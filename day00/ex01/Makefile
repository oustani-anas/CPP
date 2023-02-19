
NAME = PHONEBOOK
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
HEADER1 = Contact.hpp 
HEADER2 = PhoneBook.hpp
SRC = main.cpp \
	Contact.cpp \
	PhoneBook.cpp

OBJ_f = $(SRC:.cpp=.opp)

$(NAME) : all

all : $(OBJ_f)
	$(CC) $(CFLAGS) $(OBJ_f) -o $(NAME)

%.opp : %.cpp $(HEADER1) $(HEADER2)
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	$(RM) $(OBJ_f)

fclean : clean
	$(RM) $(NAME)

re : fclean all