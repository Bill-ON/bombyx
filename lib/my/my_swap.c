/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swap two int
*/

void    my_swap(int *a, int *b)
{
    int    tempo;

    tempo = *a;
    *a = *b;
    *b = tempo;
}
