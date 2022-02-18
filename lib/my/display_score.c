/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** display_score
*/

#include "my.h"
#include "struct.h"

init_rct_scr i_rectscore(void)
{
    init_rct_scr r_score;
    r_score.btn_sprite = sfSprite_create();
    r_score.btn_texture = sfTexture_createFromFile(SCORE, NULL);
    sfSprite_setTexture(r_score.btn_sprite, r_score.btn_texture, sfFalse);
    r_score.btn_position = (sfVector2f){15, 11};
    sfSprite_setPosition(r_score.btn_sprite, r_score.btn_position);
    r_score.btn_taille = (sfVector2f){0.7, 0.6};
    sfSprite_setScale(r_score.btn_sprite, r_score.btn_taille);
    return (r_score);
}

init_scr *i_score(str_all *strc)
{
    init_scr *score = malloc(sizeof(init_scr));
    score->text = sfText_create();
    score->position = (sfVector2f){35, 12};
    sfText_setPosition(score->text, score->position);
    sfText_setString(score->text, "Score:");
    score->font = sfFont_createFromFile(FONT);
    sfText_setCharacterSize(score->text, 45);
    sfText_setFont(score->text, score->font);
    sfText_setColor(score->text, sfWhite);
    score->sc_text = sfText_create();
    score->sc_position = (sfVector2f){170, 19};
    sfText_setPosition(score->sc_text, score->sc_position);
    score->sc_font = sfFont_createFromFile(FONT);
    sfText_setCharacterSize(score->sc_text, 38);
    sfText_setFont(score->sc_text, score->sc_font);
    sfText_setColor(score->sc_text, sfWhite);
    sfText_setString(score->sc_text, my_nbr_to_char(strc->score2));
    return (score);
}
