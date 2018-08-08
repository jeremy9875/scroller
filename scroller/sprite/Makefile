##
## Makefile for Makefile in /home/VSridhar78/raytracer1
##
## Made by Sridhar Vengadesan
## Login   <VSridhar78@epitech.net>
##
## Started on  Fri Feb 24 09:37:42 2017 Sridhar Vengadesan
## Last update Sun Apr  2 19:46:30 2017 Arthur Philippe
##

NAME    =       rush_scroller

#CFLAGS +=	-W -Wall -Werror -Wextra
CFLAGS +=	-I./include/

LDFLAGS	=	-lc_graph_prog_full -lm

SRC     =       ./main.c			\
		./sfml_basic_functions.c	\
		./manage_texture.c		\

OBJ     =       $(SRC:.c=.o)

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:         all clean fclean re
