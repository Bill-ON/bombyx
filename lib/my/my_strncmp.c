/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** my_strncmp
*/

#include <stdio.h>
#include <string.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && i < n) {
        i++;
    }
    return (s1[i] - s2[i]);
}
