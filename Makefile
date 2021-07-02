##
## EPITECH PROJECT, 2021
## makefile
## File description:
## a
##

OBJ	=	$(SRC:%.c=%.o)

NAME	=	106bombyx

LIB	=	-L lib/my -lmy

CPPFLAGS	=	-I include/ -g3

NCURSE	=	-lncurses

SRC_DIR		=	src/

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)error_handling.c	\

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	$(CC) $(OBJ) -o $(NAME) $(LIB) -Wall -Wextra $(NCURSE) $(CPPFLAGS) -lm -g3
clean:
	$(MAKE) -C lib/my clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C lib/my fclean
	rm -f $(NAME)
	rm -f *~
	rm -f \#*
	rm -f vgcore*

re: fclean all

debug: clean
	valgrind -s --track-origins=yes ./$(NAME) test.txt | cat -e

.PHONY: all clean fclean debug re
