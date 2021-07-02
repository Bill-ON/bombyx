/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** lowercase a string
*/

char    *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}
