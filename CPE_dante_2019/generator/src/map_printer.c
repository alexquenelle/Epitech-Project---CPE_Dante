/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** setup_one.c
*/

#include "my.h"

int print_map(value_t *value)
{
    int line_y = 0;

    while (value->res[line_y] != NULL){
        printf("%s", value->res[line_y]);
        if (value->res[line_y + 1] != NULL)
            printf("%c", '\n');
        line_y = line_y + 1;
    }
}