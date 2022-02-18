/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** create_spike
*/

#include "struct.h"
#include "my.h"

init_spk i_spike(void)
{
    init_spk spike;

    spike.texture = sfTexture_createFromFile(BLOCK, NULL);
    spike.sprite = sfSprite_create();
    spike.position = (sfVector2f){0, 0};
    spike.taille = (sfVector2f){1, 1};
    sfSprite_setTexture(spike.sprite, spike.texture, sfFalse);
    sfSprite_setScale(spike.sprite, spike.taille);
    sfSprite_setPosition(spike.sprite, spike.position);
    return (spike);
}

init_blk *i_block(int x, int y)
{
    init_blk *block = malloc(sizeof(init_blk));

    block->texture = sfTexture_createFromFile(SPIKE, NULL);
    block->sprite = sfSprite_create();
    block->taille = (sfVector2f){1, 1};
    block->position = (sfVector2f){(y * 53), (x * 51)};
    sfSprite_setTexture(block->sprite, block->texture, sfFalse);
    sfSprite_setScale(block->sprite, block->taille);
    sfSprite_setPosition(block->sprite, block->position);
    return (block);
}

init_blk **create_block(char **map)
{
    str_all *strc;
    int nb = count_block(map);
    init_blk **block = malloc(sizeof(init_blk *) * nb);
    int cpt = 0;
    int line = 0;
    int ch = 0;
    while (map[0][ch] != '\0') {
        while (map[line] != NULL) {
            if (map[line][ch] == '1') {
                block[cpt] = i_block(line, ch);
                cpt++;
            }
            line++;
        }
        ch++;
        line = 0;
    }
    block[cpt] = NULL;
    return (block);
}
