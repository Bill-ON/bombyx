/*
** EPITECH PROJECT, 2021
** func_flag2.c
** File description:
** functions for flags
*/

#include "my.h"
#include <stdarg.h>

void wpstr(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void wpchar(va_list ap)
{
    my_putchar((char)va_arg(ap, int));
}

void wpnbr(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void wpsgn(va_list ap)
{
    my_put_nbr_unsign(va_arg(ap, unsigned int));
}

void wpoct(va_list ap)
{
    my_convert_base(va_arg(ap, int), 8, 0);
}
