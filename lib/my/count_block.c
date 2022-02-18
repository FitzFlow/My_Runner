/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** count_block
*/

#include "my.h"

int count_block(char **map)
{
    str_all *strc;
    int line = 0;
    int ch = 0;
    int cube = 0;

    while (map[0][ch] != '\0') {
        while (map[line] != NULL) {
            if (map[line][ch] == '1')
                cube++;
            line++;
        }
        ch++;
        line = 0;
    }
    return (cube);
}

int count_block_spike(char **map)
{
    str_all *strc;
    int line = 0;
    int ch = 0;
    int cube = 0;

    while (map[0][ch] != '\0') {
        while (map[line] != NULL) {
            if (map[line][ch] == '2')
                cube++;
            line++;
        }
        ch++;
        line = 0;
    }
    return (cube);
}
