/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** find digit
*/

int    my_str_isalpha(char const *str)
{
    int    i = 0;

    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z')\
            || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else
            return (0);
    }
    return (1);
}
