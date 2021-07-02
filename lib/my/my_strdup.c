/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** copy a string
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len+1));

    my_memset(dest, 0, len+1);
    return (my_strcpy(dest, src));
}
