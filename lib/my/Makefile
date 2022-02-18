##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC = 	struct.c \
		move_character.c \
		character.c \
		play_music.c \
		destroy_music.c \
		destroy_sprite.c \
		move_background.c \
		jump_character.c \
		event.c \
		window.c \
		draw_sprite.c \
		create_spike.c \
		display_score.c \
		free.c \
		my_nbr_to_char.c \
		my_strdup.c \
		my_strlen.c \
		move_van.c \
		move_van_in_ground.c \
		count_block.c \
		game_desc.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(NAME) ../../
	cp my.h ../../include/
	cp struct.h ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../$(NAME)

re: fclean all
