/*
** EPITECH PROJECT, 2021
** proto
** File description:
** proto.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef PROTO_H
#define PROTO_H

void man(void);
int error_handling(int ac, char **av);
int start_bombyx(int ac, char **av);

#endif