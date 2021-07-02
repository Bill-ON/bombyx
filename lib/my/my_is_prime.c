/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** check if it's a prime number
*/

int    my_is_prime(int nb)
{
    int    i = 2;

    if (nb % 2 == 0 && nb > 2 || nb <= 1)
        return (0);
    while (i < nb) {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
