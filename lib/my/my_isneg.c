/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** print N if its negative or P if positive/null
*/

#include <unistd.h>

void    my_putchar(char c);

int    my_isneg(int n)
{
    (n < 0) ? my_putchar('N') : my_putchar('P');
    return (0);
}
