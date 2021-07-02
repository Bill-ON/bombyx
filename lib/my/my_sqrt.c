/*
** EPITECH PROJECT, 2021
** my_sqrt.c
** File description:
** find square root of number
*/

#include <stdio.h>

int my_sqrt(int number)
{
    int temp = 0;
    int sqrt = number / 2;

    while (sqrt != temp) {
        temp = sqrt;
        sqrt = (number/temp + temp) / 2;
    }
    return (sqrt);
}
