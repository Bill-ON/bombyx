/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "my.h"
#include "proto.h"

void ez_bombyx(int ac, char **av)
{
    double n = atof(av[1]);
    double k = atof(av[2]);
    double ind = n;

    for (int i = 1; i < 101; i++) {
        printf("%d %.2f\n", i, ind);
        ind = k*ind*((1000-ind)/1000);
    }
    return ;
}

void gitgud_bombyx(int ac, char **av)
{
    double n = atof(av[1]);
    double i0 = atof(av[2]);
    double i1 = atof(av[3]);
    double k = 1;
    double sub = i1 - i0;
    double res = n;

    for (int i = 0; i < (int)i1; i++) {
        if (i > i0)
            k += 0.01;
        printf("%.2f %.2f\n", k, res);
        res = k*res*((1000-res)/1000);
    }
    return ;
}

int start_bombyx(int ac, char **av)
{
    if (ac == 3)
        ez_bombyx(ac, av);
    else
        gitgud_bombyx(ac, av);
    return 0;
}

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 84)
        return 84;
    return (start_bombyx(ac, av));
}