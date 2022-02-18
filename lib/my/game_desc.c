/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** game_desc
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int cpt = 0;

    while (str[cpt] != '\0') {
        my_putchar(str[cpt]);
        cpt++;
    }
}

int game_desc(void)
{
    my_putstr("\n");
    my_putstr("             [Usage]\n\n");
    my_putstr("                   [./my_runner map/'the map you want']\n\n");
    my_putstr("                   Run the game with a map in the map folder,");
    my_putstr(" you can't run the game without a map.\n");
    my_putstr("                   The if you touch any spikes block, ");
    my_putstr("it's game over !\n\n");
    return (0);
}
