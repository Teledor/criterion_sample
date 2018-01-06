SRC_DIR=        $(realpath ..)

# Must list all project files without the main() function
# Criterion uses its own main() ;
# having a main() in any .c file will have the build fail
SRC=            main.c

SRC_UT_DIR=     $(realpath .)

# Must list all files containing unit tests
SRC_UT=    	test_add.c

OBJ=            $(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS=         -Wall -Wextra --coverage

LDFLAGS=        -lcriterion -lgcov

NAME=           add_test

all:            $(NAME)

$(NAME):        $(OBJ)
		cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all
