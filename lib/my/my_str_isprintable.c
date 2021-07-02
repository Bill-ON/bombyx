/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** check the printable
*/

int    my_str_isprintable(char *str)
{
    int    i = 0;

    while (str[i]) {
        if (str[i] >= 32 && str[i] <= 127)
            i++;
        else
            return (0);
    }
    return (1);
}
