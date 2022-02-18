/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** free
*/

#include "my.h"
#include "struct.h"

void free_all(str_all *strc)
{
    free(strc->score);
    free(strc->block);
    free(strc->create_block);
}
