##
## Makefile for misc in /home/arthur/delivery/.misc
##
## Made by Arthur Philippe
## Login   <arthur@epitech.net>
##
## Started on  Mon Nov  7 11:39:45 2016 Arthur Philippe
## Last update Sat Apr  1 17:22:39 2017 Arthur Philippe
##

CC	=	gcc

RM	=	rm -f

NAME	=	scroller

SRCS	=	src/main.c			\
		src/window/openwindow.c		\
		src/window/w_loop.c		\
		src/conduct_line.c		\
		src/music/track_manager.c	\
		src/get_next_line.c		\
		src/scene/scene_manager.c	\
		src/scene/scene1.c		\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Wall -g3

##CFLAGS	+=	-Werror

CFLAGS	+=	-I include/

LDFLAGS	=	-L./lib/acp -lc_graph_prog_full

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
