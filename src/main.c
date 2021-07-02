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
    double n = 0;
    double k = 0;
    double ind = 0;

    sscanf(av[1], "%lf", &n);
    sscanf(av[2], "%lf", &k);
    ind = n;
    for (int i = 1; i < 101; i++) {
        printf("%d %.2f\n", i, ind);
        ind = k*ind*((1000-ind)/1000);
    }
    return ;
}

void gitgud_bombyx(int ac, char **av)
{
    double n = 0;
    double i0 = 0;
    double i1 = 0;
    double k = 1;
    double sub = 0;
    double res = 0;

    sscanf(av[1], "%lf", &n);
    sscanf(av[2], "%lf", &i0);
    sscanf(av[3], "%lf", &i1);
    sub = i1 - i0;
    res = n;

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