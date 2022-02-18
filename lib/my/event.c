/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** event
*/

#include "my.h"

void event(str_all *strc)
{
    if (strc->event.type == sfEvtClosed)
        sfRenderWindow_close(strc->window.window);
    if (strc->event.type == sfEvtKeyPressed &&
    strc->event.key.code == sfKeyEscape)
        sfRenderWindow_close(strc->window.window);
}
