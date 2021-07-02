/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** cat two array
*/

#include "my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int destlen = my_strlen(dest) + my_strlen(src);
    char *res = malloc(sizeof(char) * (destlen +1));
    int j = 0;
    int srclen = my_strlen(src);

    my_memset(res, 97, destlen);
    res = my_strcpy(res, dest);
    for (int i = my_strlen(dest)+1; i < destlen; i++, j++) {
        for (j = 0; src[j] != '\0'; i++, j++)
            res[i] = src[j];
    }
    return (res);
}