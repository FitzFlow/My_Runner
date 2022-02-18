/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** play_music
*/

#include "struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>

void play_music(str_all *strc)
{
    strc->buffer = sfSoundBuffer_createFromFile(JUMP);
    strc->jump = sfSound_create();
    sfSound_setBuffer(strc->jump, strc->buffer);
    strc->music = sfMusic_createFromFile(CHILL1);
    sfMusic_play(strc->music);
    sfMusic_setLoop(strc->music, sfTrue);
    strc->end_music = sfMusic_createFromFile(END_SOUND);
}
