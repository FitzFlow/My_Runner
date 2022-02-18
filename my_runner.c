/*
** EPITECH PROJECT, 2021
** boostrap myRunner
** File description:
** window
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include <stdbool.h>
#include "my.h"

init_endsc i_end_screen(void)
{
    init_endsc end_screen;
    end_screen.background = sfTexture_createFromFile(END, NULL);
    end_screen.sprite = sfSprite_create();
    end_screen.position = (sfVector2f){-325, 800};
    end_screen.taille = (sfVector2f){1, 1};
    sfSprite_setScale(end_screen.sprite, end_screen.taille);
    sfSprite_setPosition(end_screen.sprite, end_screen.position);
    sfSprite_setTexture(end_screen.sprite, end_screen.background, sfFalse);
    return (end_screen);
}

bool block_collision(char **map, str_all *strc, init_blk **block)
{
    sfFloatRect perso = sfSprite_getGlobalBounds(strc->flow.sprite);
    perso.width -= 50;
    int cpt = 0;
    int nb_block = count_block(map);
    sfFloatRect b_block;

    while (cpt != nb_block) {
        b_block = sfSprite_getGlobalBounds(block[cpt]->sprite);
        if (sfFloatRect_intersects(&perso, &b_block, NULL) == sfTrue) {
            sfMusic_stop(strc->music);
            sfSound_stop(strc->jump);
            sfSprite_setPosition(strc->end_screen.sprite,
            (sfVector2f){-325, 0});
            sfSprite_setPosition(strc->flow.sprite, (sfVector2f){10000, 10000});
            sfMusic_play(strc->end_music);
            return (true);
        }
        cpt++;
    }
    return (false);
}

void display_window(char **map, str_all *strc, init_blk **block)
{
    strc = init_struct();
    sfRenderWindow_setFramerateLimit(strc->window.window, 110);
    play_music(strc);
    while (sfRenderWindow_isOpen(strc->window.window)) {
        while (sfRenderWindow_pollEvent(strc->window.window, &strc->event))
            event(strc);
        jump_character(strc);
        draw_sprite(strc, block);
        move_van(strc);
        move_background(strc);
        move_character(strc);
        block_collision(map, strc, block);
    }
    destroy_all_sound(strc);
    destroy_game_sprite(strc);
    sfRenderWindow_destroy(strc->window.window);
}
