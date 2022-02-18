/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** str
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    int var = 0;
    char *str = malloc(sizeof(char) * len + 1);

    while (src[var] != '\0') {
        str[var] = src[var];
        var = var + 1;
    }
    str[var] = '\0';
    return str;
}
