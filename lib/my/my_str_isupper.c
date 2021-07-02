/*
** EPITECH PROJECT, 2021
** my_str_isupper.c
** File description:
** check if its upper
*/

int    my_str_isupper(char *str)
{
    int    i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}
