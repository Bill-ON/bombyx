/*
** EPITECH PROJECT, 2021
** my_str_islower.c
** File description:
** check if its lowercase
*/

int    my_str_islower(char const *str)
{
    int    i = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
