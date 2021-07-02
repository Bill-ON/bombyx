/*
** EPITECH PROJECT, 2021
** my_printf2
** File description:
** my_printf2.c
*/

#include "my.h"

int my_put_nbr_unsign(unsigned int nb)
{
    if (nb >= 10)
        my_put_nbr_unsign(nb / 10);
    my_printf("%c", (nb % 10) + 48);
    return (nb);
}

int my_convert_base(int nb, int base,  int para)
{
    int i = 1, mod;
    char result[100];

    while (nb != 0) {
        mod = nb % base;
        if (mod < 10)
            mod += 48;
        else {
            if (para == 1)
                mod += 87;
            else if (para == 2)
                mod += 55;
        }
        result[i++] = mod;
        nb = nb / base;
    }
    for (int j = i-1; j > 0; j--)
        my_printf("%c", result[j]);
}

int conv_base(int nb, int base)
{
    int i = 1;
    int mod = 0;

    while (nb != 0) {
        mod += (nb % base) * i;
        nb /= base;
        i *= 10;
    }
    return (mod);
}