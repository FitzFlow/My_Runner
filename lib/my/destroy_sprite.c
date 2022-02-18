/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** destroy_music
*/

#include "struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void destroy_game_sprite(str_all *strc)
{
    init_blk **block;
    sfSprite_destroy(strc->background.sprite);
    sfSprite_destroy(strc->mountain.sprite);
    sfSprite_destroy(strc->tree.sprite);
    sfSprite_destroy(strc->ground.sprite);
    sfSprite_destroy(strc->flow.sprite);
    sfSprite_destroy(strc->spike.sprite);
    sfText_destroy(strc->score->text);
    sfSprite_destroy(strc->r_score.btn_sprite);
    sfSprite_destroy(strc->van.sprite);
    sfSprite_destroy(strc->plane.sprite);
    sfSprite_destroy(strc->end_screen.sprite);
}
