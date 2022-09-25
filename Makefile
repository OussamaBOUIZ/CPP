
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
GPP = c++ -std=c++17
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = main

all: $(NAME)
$(NAME): $(OBJ)
	$(GPP) $(OBJ) -o $(NAME)
	
%.o: %.cpp
	$(GPP) $(GFLAGS) -c $?
clean:
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all