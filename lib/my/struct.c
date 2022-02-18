/*
** EPITECH PROJECT, 2021
** boostrap myRunner
** File description:
** struct
*/

#include "struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>

init_back i_background(void)
{
    init_back background;
    background.background = sfTexture_createFromFile(BACK, NULL);
    background.sprite = sfSprite_create();
    background.position = (sfVector2f){0, 0};
    background.taille = (sfVector2f){0.71, 1};
    background.rect.height = 730;
    background.rect.left = 0;
    background.rect.top = 0;
    background.rect.width = 1920;
    sfSprite_setScale(background.sprite, background.taille);
    sfSprite_setPosition(background.sprite, background.position);
    sfSprite_setTexture(background.sprite, background.background, sfFalse);
    sfSprite_setTextureRect(background.sprite, background.rect);
    return (background);
}

init_mount i_mountain(void)
{
    init_mount mountain;
    mountain.background = sfTexture_createFromFile(MOUNT, NULL);
    mountain.sprite = sfSprite_create();
    mountain.position = (sfVector2f){0, 0};
    mountain.taille = (sfVector2f){0.71, 1};
    mountain.rect.height = 730;
    mountain.rect.left = 0;
    mountain.rect.top = 0;
    mountain.rect.width = 1920;
    sfSprite_setScale(mountain.sprite, mountain.taille);
    sfSprite_setPosition(mountain.sprite, mountain.position);
    sfSprite_setTexture(mountain.sprite, mountain.background, sfFalse);
    sfSprite_setTextureRect(mountain.sprite, mountain.rect);
    return (mountain);
}

init_tre_e i_tree(void)
{
    init_tre_e tree;
    tree.background = sfTexture_createFromFile(TREE, NULL);
    tree.sprite = sfSprite_create();
    tree.position = (sfVector2f){0, 0};
    tree.taille = (sfVector2f){0.71, 1};
    tree.rect.height = 730;
    tree.rect.left = 0;
    tree.rect.top = 0;
    tree.rect.width = 1920;
    sfSprite_setScale(tree.sprite, tree.taille);
    sfSprite_setPosition(tree.sprite, tree.position);
    sfSprite_setTexture(tree.sprite, tree.background, sfFalse);
    sfSprite_setTextureRect(tree.sprite, tree.rect);
    return (tree);
}

init_grnd i_ground(void)
{
    init_grnd ground;
    ground.background = sfTexture_createFromFile(GROUND, NULL);
    ground.sprite = sfSprite_create();
    ground.position = (sfVector2f){0, 0};
    ground.taille = (sfVector2f){0.71, 1};
    ground.rect.height = 730;
    ground.rect.left = 0;
    ground.rect.top = 0;
    ground.rect.width = 1920;
    sfSprite_setScale(ground.sprite, ground.taille);
    sfSprite_setPosition(ground.sprite, ground.position);
    sfSprite_setTexture(ground.sprite, ground.background, sfFalse);
    sfSprite_setTextureRect(ground.sprite, ground.rect);
    return (ground);
}

str_all *init_struct(void)
{
    str_all *strc = malloc(sizeof(str_all));
    strc->r_score = i_rectscore();
    strc->background = i_background();
    strc->end_screen = i_end_screen();
    strc->mountain = i_mountain();
    strc->tree = i_tree();
    strc->window = i_window();
    strc->ground = i_ground();
    strc->flow = i_flow();
    strc->clock = sfClock_create();
    strc->second = 0;
    strc->time = sfClock_restart(strc->clock);
    strc->spike = i_spike();
    strc->score2 = 0;
    strc->score = i_score(strc);
    strc->van = i_van();
    strc->plane = i_plane();
    strc->end_game = 0;
    return (strc);
}
