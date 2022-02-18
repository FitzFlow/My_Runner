/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** jump_character
*/

#include "my.h"

static void jump_sound(sfVector2f poss, str_all *strc)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) &&
    strc->flow.jumping == 0 && poss.y == MAX_Y)
        sfSound_play(strc->jump);
}

void jump_character(str_all *strc)
{
    float const gravity = 0.1f;
    sfVector2f poss = sfSprite_getPosition(strc->flow.sprite);

    jump_sound(poss, strc);
    if (sfKeyboard_isKeyPressed(sfKeySpace) && strc->flow.jumping == 0) {
        if (strc->flow.speed > 0.2f) {
            poss.y -= strc->flow.speed;
            strc->flow.speed -= gravity;
        } else {
            strc->flow.jumping = 1;
        }
    } else {
        poss.y += strc->flow.speed;
        strc->flow.speed += gravity;
        if (poss.y >= MAX_Y) {
            poss.y = MAX_Y;
            strc->flow.speed = MAX_SPEED;
            strc->flow.jumping = 0;
        }
    }
    sfSprite_setPosition(strc->flow.sprite, poss);
}
