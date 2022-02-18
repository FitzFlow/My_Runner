/*
** EPITECH PROJECT, 2021
** boostrap myRunner
** File description:
** character
*/

#include "struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>

init_f i_flow(void)
{
    init_f flow;
    sfIntRect rect;
    flow.texture = sfTexture_createFromFile(FLOW, NULL);
    flow.sprite = sfSprite_create();
    flow.position = (sfVector2f){150, 535};
    flow.taille = (sfVector2f){1, 1};
    flow.jumping = 0;
    sfSprite_setScale(flow.sprite, flow.taille);
    sfSprite_setPosition(flow.sprite, flow.position);
    sfSprite_setTexture(flow.sprite, flow.texture, sfFalse);
    rect.top = 0;
    rect.left = 0;
    rect.height = 131;
    rect.width = 100;
    flow.speed = MAX_SPEED;
    sfSprite_setTextureRect(flow.sprite, rect);
    return (flow);
}
