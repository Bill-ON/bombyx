/*
** EPITECH PROJECT, 2021
** my_memset.c
** File description:
** fil a mem zone with a define value
*/

void *my_memset(void *s, int c, int len)
{
    char *dest = s;

    for (int i = 0; i < len; i++)
        dest[i] = c;
    return (dest);
}
