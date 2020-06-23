/*
** EPITECH PROJECT, 2019
** generator
** File description:
** generate.c
*/

#include "my.h"

char **random_wall(value_t *value)
{
    int line_y = 0;
    int line_x = 0;
    int r = 0;

    while (line_y != value->y){
        while (line_x != value->x){
            if (value->res[line_y][line_x] == 'X')
            {
                r = rand() % 5 + 1;
                if (r == 1)
                    value->res[line_y][line_x] = '*';
                if (r >= 2)
                    value->res[line_y][line_x] = 'X';
            }
            line_x = line_x + 1;
        }
        line_x = 0;
        line_y = line_y + 1;
    }
}