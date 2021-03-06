/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int destlen = my_strlen(dest);
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return (dest);
}
