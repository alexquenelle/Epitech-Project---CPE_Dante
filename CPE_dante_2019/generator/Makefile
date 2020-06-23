##
## EPITECH PROJECT, 2019
## CPE_matchstick_2019
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/my_getnbr.c	\
		src/generate.c	\
		src/map_printer.c	\
		src/my_strcmp.c	\
		src/maze.c	\

CFLAGS	=	-I./include

TEST_SRC = tests/tests.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

TEST_NAME = unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean :
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)

debug:
	gcc -o $(NAME) $(SRC) -g $(CFLAGS)

re:	fclean all

.PHONY: all re clean fclean