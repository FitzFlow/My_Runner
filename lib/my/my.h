/*
** EPITECH PROJECT, 2021
** myh
** File description:
** write all fonctios
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <SFML/Graphics.h>
    #include "struct.h"
    #include <SFML/Audio.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

int my_put_str(char const *str);

void my_putchar(char c);

void move_character(str_all *strc);

void play_music(str_all *strc);

void destroy_all_sound(str_all *strc);

void destroy_game_sprite(str_all *strc);

void move_background(str_all *strc);

void play_setting(str_all *strc);

void jump_character(str_all *strc);

void event(str_all *strc);

void draw_sprite(str_all *strc, init_blk **block);

void free_all(str_all *strc);

char *my_nbr_to_char(int nb);

char **load_map(char const *filepath);

void display_window(char **map, str_all *strc, init_blk **block);

void place_block(char **map, int ch);

int my_strlen(char const *str);

char *my_strdup(char const *src);

void move_van(str_all *strc);

int count_block(char **map);

int count_spike(char **map);

int count_block_spike(char **map);

int game_desc(void);

#endif
