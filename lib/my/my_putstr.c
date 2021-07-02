/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display a string
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    return (write(1, str, my_strlen(str)));
}
