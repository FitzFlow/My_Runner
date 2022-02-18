/*
** EPITECH PROJECT, 2021
** boostrap myRunner
** File description:
** move_character
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"

void move_character(str_all *strc)
{
    sfIntRect rect = sfSprite_getTextureRect(strc->flow.sprite);
    strc->time = sfClock_getElapsedTime(strc->clock);
    strc->second = sfTime_asSeconds(strc->time);
    if (strc->second > 0.1) {
        strc->score2 += 1;
        if (rect.left >= 500)
            rect.left = 0;
        else
            rect.left = rect.left + 100;
        sfClock_restart(strc->clock);
        sfSprite_setTextureRect(strc->flow.sprite, rect);
    }
}
