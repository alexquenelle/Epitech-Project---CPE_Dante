##
## EPITECH PROJECT, 2019
## CPE_matchstick_2019
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/str_to_word_array.c	\

CFLAGS	=	-I./include

TEST_SRC = tests/tests.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

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