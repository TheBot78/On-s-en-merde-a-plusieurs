/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** check_biggest_square
*/

#include "my.h"

static int is_sup(int tab, int big_number)
{
    if (tab > big_number) {
        big_number = tab;
        return big_number;
    }
    return big_number;
}

static int look_for_big_number(int **tab, char **map)
{
    int big_number = 0;

    for (int y = 0; map[y] != NULL; y++)
        for (int x = 0; map[y][x] != '\0'; x++)
            big_number = is_sup(tab[y][x], big_number);
    return big_number;
}

static char **modify_map(char **map, int y, int x, int big_number)
{
    int z = y - big_number;
    int z2 = x - big_number;

    for (z; y > z; y--)
        for (long x2 = x; x2 > z2; x2--)
            map[y][x2] = 'x';
    return map;
}

void check_biggest_square(int **tab, char **map, int len, int widght)
{
    int big_number = look_for_big_number(tab, map);
    int x = 0; int y = 0;
    int z = 1;

    while (z != 0) {
        if (x == widght) {
            y++;
            x = 0;
        }
        x++;
        if (tab[y][x] == big_number)
            z = 0;
    }
    map = modify_map(map, y, x, big_number);
    for (int i = 0; i < len; i++){
        for (int b = 0; b < widght; b++)
            my_putchar(map[i][b]);
        my_putchar('\n');
    }
}
