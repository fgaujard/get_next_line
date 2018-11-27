CC = gcc
CC_FlAGS = -c
NAME = libft.a
SRC = *.c
OBJ = *.o

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(SRC) $(CC_FLAGS)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
