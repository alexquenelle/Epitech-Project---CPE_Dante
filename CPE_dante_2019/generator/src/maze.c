/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** perfect_maze.c
*/

#include "my.h"

int create_map(value_t *value)
{
    value->res = malloc(sizeof(char *) * value->y + 1);
    int line_x = 0;
    int line_y = 0;

    while (line_y < value->y){
        value->res[line_y] = malloc(sizeof(char *) * value->x + 1);
        while (line_x < value->x){
            value->res[line_y][line_x] = 'X';
            line_x = line_x + 1;
        }
        line_x = 0;
        line_y = line_y + 1;
    }
    value->res[line_y] = NULL;
    put_star(value);
    binary_tree(value);
}

int check_modulo(value_t *value)
{
    if (value->x % 2 == 0 && value->y % 2 == 0 || value->x > value->y)
        return (1);
}

int put_star(value_t *value)
{
    int line_y = 0;
    int line_x = 0;

    while (line_y != value->y){
        while (line_x != value->x){
            value->res[0][line_x] = '*';
            value->res[line_y][0] = '*';
            line_x = line_x + 1;
        }
        line_x = 0;
        line_y = line_y + 1;
    }
}

int binary_tree(value_t *value)
{
    int random = 0;
    int my_y = 2;
    int my_x = 2;

    while (my_y <= value->y - 1){
        while (my_x <= value->x - 1){
            value->res[my_y][my_x] = '*';
            random = rand() % 2 + 1;
            if (random == 1)
                value->res[my_y][my_x - 1] = '*';
            else if (random == 2)
                value->res[my_y - 1][my_x] = '*';
            my_x = my_x + 2;
        }
        my_x = 2;
        my_y = my_y + 2;
    }
    if (check_modulo(value) == 1)
        last_line(value);
    value->res[value->y - 1][value->x - 1] = '*';
}

int last_line(value_t *value)
{
    int line_x = 2;
    int random = 0;

    while (line_x <= value->x - 1){
        value->res[value->y - 1][line_x] = '*';
        line_x = line_x + 2;
    }
}