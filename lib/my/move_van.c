/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** move_van
*/

#include "struct.h"

init_vn i_van(void)
{
    init_vn van;
    van.texture = sfTexture_createFromFile(VAN, NULL);
    van.sprite = sfSprite_create();
    van.taille = (sfVector2f){0.15, 0.15};
    van.position = (sfVector2f){1400, 451};
    sfSprite_setScale(van.sprite, van.taille);
    sfSprite_setTexture(van.sprite, van.texture, sfFalse);
    sfSprite_setPosition(van.sprite, van.position);
    return (van);
}

init_plne i_plane(void)
{
    init_plne plane;
    plane.texture = sfTexture_createFromFile(PLANE, NULL);
    plane.sprite = sfSprite_create();
    plane.taille = (sfVector2f){0.09, 0.09};
    plane.position = (sfVector2f){1400, 200};
    sfSprite_setScale(plane.sprite, plane.taille);
    sfSprite_setTexture(plane.sprite, plane.texture, sfFalse);
    sfSprite_setPosition(plane.sprite, plane.position);
    return (plane);
}
