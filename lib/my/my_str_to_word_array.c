/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** convert string to tab
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int alphanum(char c)
{
    if (c > 31 && c < 123)
        return (1);
    return (0);
}

int wordlen(char *str, int j)
{
    int len = 0;

    for (; alphanum(str[j]) == 1; j++, len++);
    return (len);
}

int countword(char *str)
{
    int word = 0;

    for (int i = 0; str[i]; i++) {
        if (alphanum(str[i]) == 1 && alphanum(str[i + 1]) == 0)
            word++;
    }
    return (word);
}

char **my_str_to_word_array(char *str)
{
    int i = 0;
    int j = 0;
    char **tab = NULL;

    tab = malloc(sizeof(char *) * (countword(str)+1));
    for (; i < countword(str); i++) {
        tab[i] = malloc(sizeof(char) * (wordlen(str, j)+1));
        my_memset(tab[i], 0, wordlen(str, j)+1);
        for (; alphanum(str[j]) != 1; j++);
        tab[i] = my_strncpy(tab[i], &str[j], wordlen(str, j));
        j = j + wordlen(str, j);
        for (; alphanum(str[j]) != 1; j++);
    }
    tab[i] = NULL;
    return (tab);
}