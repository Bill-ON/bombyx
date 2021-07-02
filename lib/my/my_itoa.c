/*
** EPITECH PROJECT, 2021
** my_itoa.c
** File description:
** my_itoa
*/

#include "my.h"
#include <stdlib.h>
#include <stdbool.h>

char *start_str_itoa(int num)
{
    char *str = NULL;
    int size = 0;

    if (num == 0)
        num = 1;
    for (int j = num; j != 0; size++)
        j /= 10;
    str = malloc(sizeof(char) * (size+1));
    my_memset(str, 0, size+1);
    return (str);
}

char *my_itoa(int num, int base)
{
    int i = 0;
    char *str = start_str_itoa(num);
    bool isNegative = false;

    if (num == 0) {
        str[0] = '0';
        return (str);
    }
    if (num < 0 && base == 10) {
        isNegative = true;
        num = -num;
    }
    for (int rem = num % base; num != 0; num /= base) {
        rem = num % base;
        str[i++] = (rem > 9) ? (rem-10) + 'a' : rem + '0';
    }
    (isNegative) ? (str[i++] = '-') : i;
    my_revstr(str);
    return str;
}