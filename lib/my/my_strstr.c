/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** find a needle
*/

#include <stddef.h>

char    *my_strstr(char *str, char const *to_find)
{
    int    i = 0;
    int    j = 0;

    if (to_find[i] == '\0')
        return (str);
    while (str[i]) {
        j = 0;
        while (str[i + j] == to_find[j]) {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}
