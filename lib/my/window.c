/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** window
*/

#include "struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>

init_wind i_window(void)
{
    init_wind window;
    window.video = (sfVideoMode){1280, 720, 32};
    window.window = sfRenderWindow_create(window.video, "My_Runner.exe",
    sfClose, NULL);
    return (window);
}
