/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** destroy_music
*/

#include "struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void destroy_all_sound(str_all *str)
{
    sfMusic_destroy(str->music);
    sfMusic_destroy(str->end_music);
    sfSound_destroy(str->jump);
}
