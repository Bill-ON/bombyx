/*
** EPITECH PROJECT, 2021
** func_flag.c
** File description:
** functions for flags
*/

#include "my.h"
#include <stdarg.h>

void wphexa(va_list ap)
{
    my_convert_base(va_arg(ap, int), 16, 1);
}

void wphexmaja(va_list ap)
{
    my_convert_base(va_arg(ap, int), 16, 2);
}

void wpbi(va_list ap)
{
    my_convert_base(va_arg(ap, int), 2, 0);
}

void wpstrstr(va_list ap)
{
    my_putstrstr(va_arg(ap, char *));
}

void wppoint(va_list ap)
{
    my_printf("%s", "0x");
    my_convert_base(va_arg(ap, unsigned int), 16, 1);
}
