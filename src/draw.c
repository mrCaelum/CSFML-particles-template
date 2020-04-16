/*
** EPITECH HUB WORKSHOP, 2020
** CSFML particles creation
** File description:
** Draw handler source file
*/

#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include "window_options.h"
#include "draw.h"

void draw(sfRenderWindow *win, sfUint8 *buffer)
{
    sfTexture *texture = sfTexture_create(WINDOW_WIDTH, WINDOW_HEIGHT);
    sfSprite *sprite = sfSprite_create();

    if (!texture || !sprite)
        exit(84);
    sfTexture_updateFromPixels(
        texture, buffer,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        0, 0
    );
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f){0, 0});
    sfRenderWindow_clear(win, sfBlack);
    sfRenderWindow_drawSprite(win, sprite, NULL);
    sfRenderWindow_display(win);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
}