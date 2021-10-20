/*
** EPITECH PROJECT, 2021
** 7
** File description:
** gra
*/

#ifndef GRA_H_
#define GRA_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct game_object game_object;
struct game_object
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f scale;
};

#endif /* !GRA_H_ */
