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
    return ;
}

void gitgud_bombyx(int ac, char **av)
{
    double n = 0;
    double k = 0;

    sscanf(av[1], "%lf", &n);
    sscanf(av[2], "%lf", &k);
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