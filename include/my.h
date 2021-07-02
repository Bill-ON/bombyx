/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** header
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>

#define CTOI(X) (X - '0')
#define ITOC(X) (X + '0')

char *start_str_itoa(int num);
char *my_itoa(int num, int base);
int     my_abs(int num);
int     my_sqrt(int number);
void    my_putchar(char c);
int     my_isneg(int nb);
int     my_put_nbr(int nb);
void    my_swap(int *a, int *b);
int     my_putstr(char const *str);
int     my_strlen(char const *str);
int     my_getnbr(char const *str);
double my_pow(double nb, int pow);
void    my_sort_int_array(int *tab, int size);
int     my_compute_power_rec(int nb, int power);
int     my_compute_square_root(int nb);
int     my_is_prime(int nb);
int     my_find_prime_sup(int nb);
char    *my_strcpy(char *dest, char const *src);
char    *my_strncpy(char *dest, char const *src, int n);
char    *my_revstr(char *str);
char    *my_strstr(char *str, char const *to_find);
int     my_strcmp(char const *s1, char const *s2);
int     my_strncmp(char const *s1, char const *s2, int n);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
char    *my_strcapitalize(char *str);
int     my_str_isalpha(char const *str);
int     my_str_isnum(char const *str);
int     my_str_islower(char const *str);
int     my_str_isupper(char const *str);
int     my_str_isprintable(char const *str);
int     my_showstr(char const *str);
int     my_showmem(char const *str, int size);
char    *my_strcat(char *dest, char const *src);
char    *my_strncat(char *dest, char const *src, int nb);
char    *my_strdup(char const *src);
void    *my_memset(void *s, int c, int len);
int     my_show_word_array(char * const *tab);
void    find_flag_type(char fmt, va_list ap);
void    my_printf(char const *fmt, ...);
int     my_put_nbr_unsign(unsigned int nb);
int     my_convert_base(int nb, int base,  int para);
int     my_putstrstr(char *str);
int     conv_base(int nb, int base);
char    **my_str_to_word_array(char *str);
void    wpstr(va_list ap);
void    wpchar(va_list ap);
void    wpnbr(va_list ap);
void    wpsgn(va_list ap);
void    wpoct(va_list ap);
void    wphexa(va_list ap);
void    wphexmaja(va_list ap);
void    wpbi (va_list ap);
void    wpstrstr (va_list ap);
void    wppoint (va_list ap);
void    wppct (va_list ap);

typedef struct lt
{
    char lt1;
    void (*lt2)(va_list);
}lt;

#endif
