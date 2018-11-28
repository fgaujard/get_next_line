CC = gcc
CC_FLAGS = -c -Wall -Wextra -Werror
NAME = libft.a
SRC = *.c
OBJ = *.o
INCLUDES = libft.h

$(NAME) : $(OBJ)
	ar rc $@ $(OBJ)
	ranlib $@

$(OBJ) : $(SRC) $(INCLUDES)
	$(CC) $(CC_FLAGS) $(SRC)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

all : $(NAME)

re : fclean all
