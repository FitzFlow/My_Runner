/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** move_background
*/

#include "my.h"

void move_background(str_all *strc)
{
    strc->tree.rect.left += 4.5;
    strc->background.rect.left += 1;
    strc->mountain.rect.left += 2.5;
    strc->ground.rect.left += 5.2;
    sfSprite_setTextureRect(strc->background.sprite, strc->background.rect);
    sfSprite_setTextureRect(strc->mountain.sprite, strc->mountain.rect);
    sfSprite_setTextureRect(strc->tree.sprite, strc->tree.rect);
    sfSprite_setTextureRect(strc->ground.sprite, strc->ground.rect);
    sfTexture_setRepeated(strc->background.background, sfTrue);
    sfTexture_setRepeated(strc->mountain.background, sfTrue);
    sfTexture_setRepeated(strc->tree.background, sfTrue);
    sfTexture_setRepeated(strc->ground.background, sfTrue);
}
