/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char **argv)
{
    value_t *value = malloc(sizeof(value_t));
    srand(time(NULL));

    if (argc < 3)
        return 84;
    value->x = my_getnbr(argv[1]);
    value->y = my_getnbr(argv[2]);
    if (value->x <= 0 || value->y <= 0)
        return (84);
    else if (argc == 4 && my_strcmp(argv[3], "perfect\n") == 1){
        create_map(value);
        print_map(value);
    }
    else {
        create_map(value);
        random_wall(value);
        print_map(value);
    }
    return (0);
}