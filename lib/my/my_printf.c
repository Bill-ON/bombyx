/*
** EPITECH PROJECT, 2021
** my_print.c
** File description:
** recode print func
*/

#include <stdarg.h>
#include "my.h"

static const lt tab[12] =
{
    {'c', &wpchar},
    {'s', &wpstr},
    {'d', &wpnbr},
    {'i', &wpnbr},
    {'u', &wpsgn},
    {'o', &wpoct},
    {'x', &wphexa},
    {'X', &wphexmaja},
    {'b', &wpbi},
    {'S', &wpstrstr},
    {'p', &wppoint},
    {'%', &wppct},
};

int  my_putstrstr(char *str)
{
    int val_oct = 0;
    int tmp = 0;
    int cmt = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            val_oct = conv_base(str[i], 8);
            tmp = val_oct;
            my_printf("\\");
            for (; tmp != 0; cmt++)
                tmp /= 10;
            for (; cmt < 3; cmt++)
                my_printf("%d", 0);
            my_printf("%d", val_oct);
        }
        else if (str[i] > 32 && str[i] < 127)
            my_printf("%c", str[i]);
    }
    return (0);
}

void find_flag_type(char fmt, va_list ap)
{
    for (int i = 0; i < 12; i = i + 1) {
        if (tab[i].lt1 == fmt)
            tab[i].lt2(ap);
    }
}

void my_printf(char const *fmt, ...)
{
    va_list ap;

    va_start(ap, fmt);
    for (int i = 0; fmt[i]; i = i + 1) {
        if (fmt[i] == '%') {
            find_flag_type(fmt[i + 1], ap);
            i++;
        }
        else
            my_putchar(fmt[i]);
    }
    va_end(ap);
}
