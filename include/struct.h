/*
** EPITECH PROJECT, 2021
** On-s-en-merde-a-plusieurs
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct game_object game_object;
struct game_object
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    
};

#endif /* !STRUCT_H_ */
