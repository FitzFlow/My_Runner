##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## Makefile
##

SRC = 	load_map.c \
		my_runner.c

NAME = my_runner

CFLAGS = -W -Wall -Werror -Wextra -g3
IFLAGS = -I include
LFLAGS = -L lib/my -lmy
CSFLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

all: $(NAME)

$(NAME):
	make -C ./lib/my all
	gcc -o $(NAME) $(FLAGS) $(IFLAGS) $(SRC) $(CSFLAGS) $(LFLAGS)
	clear

clean:
	make -C ./lib/my clean
	rm -f *~

val:
	gcc -o $(NAME) $(CFLAGS) $(IFLAGS) $(SRC) $(LFLAGS) -g3

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME)
	clear

re : fclean all
	make -C ./lib/my re
	clear
