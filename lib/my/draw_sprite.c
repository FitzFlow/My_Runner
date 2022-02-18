/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** draw_sprite
*/

#include "my.h"

void draw_sprite(str_all *strc, init_blk **block)
{
    sfRenderWindow_drawSprite(strc->window.window,
    strc->background.sprite, NULL);
    sfRenderWindow_drawSprite(strc->window.window, strc->plane.sprite, NULL);
    sfRenderWindow_drawSprite(strc->window.window,
    strc->mountain.sprite, NULL);
    sfRenderWindow_drawSprite(strc->window.window, strc->van.sprite, NULL);
    sfRenderWindow_drawSprite(strc->window.window, strc->tree.sprite, NULL);
    sfRenderWindow_drawSprite(strc->window.window, strc->ground.sprite, NULL);
    sfRenderWindow_drawSprite(strc->window.window,
    strc->r_score.btn_sprite, NULL);
    sfText_setString(strc->score->sc_text, my_nbr_to_char(strc->score2));
    sfRenderWindow_drawText(strc->window.window, strc->score->text, NULL);
    sfRenderWindow_drawText(strc->window.window, strc->score->sc_text, NULL);
    sfRenderWindow_drawSprite(strc->window.window, strc->flow.sprite, NULL);
    for (int i = 0; block[i] != NULL; i++) {
        sfSprite_move(block[i]->sprite, (sfVector2f) {-4, 0});
        sfRenderWindow_drawSprite(strc->window.window, block[i]->sprite, NULL);
    }
    sfRenderWindow_drawSprite(strc->window.window,
    strc->end_screen.sprite, NULL);
    sfRenderWindow_display(strc->window.window);
}
