/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** move_van_in_ground
*/

#include "struct.h"
#include "my.h"

void reset_van(str_all *strc)
{
    sfVector2f move = sfSprite_getPosition(strc->van.sprite);
    sfVector2f move_plane = sfSprite_getPosition(strc->plane.sprite);
    if (move.x < -100) {
        sfSprite_setPosition(strc->van.sprite,
        (sfVector2f){rand() % ((1900) - 1400) + 1400, 451});
    }
    if (move_plane.x < -100)
        sfSprite_setPosition(strc->plane.sprite,
        (sfVector2f){rand() %((1900) - 1400) + 1400, 200});
}

void move_van(str_all *strc)
{
    sfVector2f move = sfSprite_getPosition(strc->van.sprite);
    sfVector2f move_plane = sfSprite_getPosition(strc->plane.sprite);
    move.x = -3.3;
    move.y = 0;
    sfSprite_move(strc->van.sprite, move);
    move_plane.x = -1;
    move_plane.y = 0;
    sfSprite_move(strc->plane.sprite, move_plane);
    reset_van(strc);
}
