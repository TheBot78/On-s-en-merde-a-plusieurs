/*
** EPITECH PROJECT, 2021
** B-CPE-100-PAR-1-1-cpoolday13-clement.martin
** File description:
** main
*/

#include "include/gra.h"

sfRenderWindow *create_window(unsigned int width, unsigned height,
unsigned int bpp, char *title)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {width, height, bpp};

    window = sfRenderWindow_create(video_mode, title, sfClose | sfResize, NULL);
    return window;
}

int main(int ac, char * const *av)
{
    sfRenderWindow *window = create_window(800 , 600, 32 , "Csfml");
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfRed);
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
    sfRenderWindow_destroy(window);
    return 0;
}