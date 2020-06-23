/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stddef.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

typedef struct value_s
{
    int x;
    int y;
    char **res;
}value_t;

int main(int argc, char **argv);
char **generate_maze(value_t *value);
char **random_wall(value_t *value);
int create_map(value_t *value);
int binary_tree(value_t *value);
int create_perfect_map(value_t *value);
int put_star(value_t *value);
int check_modulo(value_t *value);
int last_line(value_t *value);
int my_getnbr(char const *str);
int print_map(value_t *value);
int my_strcmp(char *str1, char *str2);

#endif /* MY_H_ */