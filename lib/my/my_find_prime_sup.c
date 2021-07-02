/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** find the sup prime
*/

int    my_is_prime(int nb);

int    my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) != 1)
        my_find_prime_sup(nb + 1);
    else
        return (nb);
    return (0);
}
