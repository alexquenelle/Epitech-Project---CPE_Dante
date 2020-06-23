/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** .
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long int nb = 0;

    if (str[i] < 42 || str[i] > 57
        && str[i] == 44 && str[i] == 46 && str[i] == 47)
        return (0);

    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            sign = sign * (-1);
        i = i + 1;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9'){
        nb = nb * 10 + ((str[i] - 48) * sign);
        if (nb > 2147483647 || nb < -2147483648)
            return (0);
        i = i + 1;
    }
    return (nb);
}