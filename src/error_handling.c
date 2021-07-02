/*
** EPITECH PROJECT, 2021
** error_handling.c
** File description:
** error_handling
*/

#include "my.h"
#include "proto.h"

void man(void)
{
    my_putstr("USAGE\n"
    "\t./106bombyx n [k | i0 i1]\n\n"
    "DESCRIPTION\n"
    "\tn\t numberof first generation individuals\n"
    "\tk\tgrowth rate from 1 to 4\n"
    "\ti0\tinitial generation (included)\n"
    "\ti1\tfinal generation (included)\n");
    return ;
}

int check_syntax_3args(int ac, char **av)
{
    double k = atof(av[2]);

    if (k < 1 || k > 4)
        return 84;
    return 0;
}

int check_syntax_4args(int ac, char **av)
{
    double i0 = atof(av[2]);
    double i1 = atof(av[3]);

    if ((i0 - (int)i0) != 0)
        return 84;
    if ((i1 - (int)i1) != 0)
        return 84;
    return 0;
}

int error_handling(int ac, char **av)
{
    double n = atof(av[1]);

    if (ac == 2 && my_strcmp("-h", av[1]) == 0) {
        man();
        return 0;
    }
    if (ac < 3 || ac > 4)
        return 84;
    if ((n - (int)n) != 0)
        return 84;
    if (ac == 3 && check_syntax_3args(ac, av) == 84)
        return 84;
    if (ac == 4 && check_syntax_4args(ac, av) == 84)
        return 84;
    return 0;
}