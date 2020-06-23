/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc != 2){
        printf("Need two arguments");
        return (84);
    }
    get_file_map(argv[1]);
}

char **get_file_map(char const *filepath)
{
    struct stat buf;
    stat(filepath, &buf);
    int fd = open(filepath, O_RDONLY);
    int i = 0;
    char *buffer = malloc(sizeof(char) * buf.st_size + 1);
    int nb = read(fd, buffer, buf.st_size);
    char **buf_n = shell_str_to_array(buffer);

    maze_printer(buf_n);
}

int maze_printer(char **buf_n)
{
    int i = 0;

    while (buf_n[i] != NULL){
        printf("%s\n", buf_n[i]);
        i = i + 1;
    }
}