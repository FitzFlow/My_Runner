/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-florian.etheve
** File description:
** load_map
*/

#include "my.h"

i_var variable(char const *filepath)
{
    i_var var;
    var.line = 0;
    var.ch = 0;
    var.fd = fopen(filepath, "r");
    var.character = NULL;
    var.map = malloc(sizeof(char *) * 14);
    return (var);
}

int error_case(FILE *fd)
{
    if (fd == NULL) {
        write(2, "You need to load a valide map\n", 30);
        return (1);
    }
    return (0);
}

char **load_map(char const *filepath)
{
    i_var var = variable(filepath);
    size_t len = 0;

    if (error_case(var.fd) == 1)
        return NULL;
    while (getline(&var.character, &len, var.fd) != -1) {
        var.map[var.line] = my_strdup(var.character);
        var.line++;
    }
    var.map[var.line] = NULL;
    fclose(var.fd);
    return (var.map);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        game_desc();
        return (0);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] != 'h') {
        write(2, "\nTry -h or load a valid map to continue\n\n", 41);
        return (0);
    }
    char **map;
    if (ac == 2) {
        map = load_map(av[1]);
        str_all *strc;
        init_blk **block = create_block(map);
        display_window(map, strc, block);
    }
    else
        write(2, "You can't run the game without loading a map\n", 45);
    return (0);
}
