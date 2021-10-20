##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

SRC	=	main.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	csfml

FLAGS	=	-Wall -Wextra -Werror -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	$(NAME)


$(NAME):	$(OBJ)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
