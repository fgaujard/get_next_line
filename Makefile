CC = gcc
CC_FLAGS = -c -Wall -Wextra -Werror
NAME = libft.a
SRC = *.c
OBJ = *.o

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CC_FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
