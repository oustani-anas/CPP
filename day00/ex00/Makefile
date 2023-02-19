
NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror
VERSION = -std=c++98
RM = rm -rf
SRC = megaphone.cpp \

OBJ_f = $(SRC:.cpp=.opp)

all : $(NAME)

$(NAME) : $(OBJ_f)
	$(CC) $(FLAGS) $(VERSION) $(OBJ_f) -o $(NAME)

%.opp : %.cpp
	$(CC) $(FLAGS) -o $@ -c $^

clean :
	$(RM) $(OBJ_f)

fclean : clean
	$(RM) $(NAME)