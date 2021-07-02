/*
** EPITECH PROJECT, 2021
** my_abs
** File description:
** my_abs.c
*/

int my_abs(int num)
{
    (num < 0) ? (num *= -1) : (num += 0);
    return (num);
}

double my_pow(double nb, int pow)
{
    for (int i = 0; i < pow; i++)
        nb *= nb;
    return (nb);
}