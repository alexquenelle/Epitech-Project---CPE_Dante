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
#include<fcntl.h>
#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char **argv);
char **get_file_map(char const *filepath);
int copy_char(char c);
int maze_printer(char **buf_n);
int my_strlen_str_array(char *str);
int my_strlen_words(char *str, int i);
char **shell_str_to_array(char *str);

#endif /* MY_H_ */