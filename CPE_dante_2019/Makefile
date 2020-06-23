##
## EPITECH PROJECT, 2019
## CPE_matchstick_2019
## File description:
## Makefile
##

all:
	make -C generator
	make -C solver

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