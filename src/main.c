/*
** EPITECH HUB WORKSHOP, 2020
** CSFML particles creation
** File description:
** Entery point file
*/

#include <stdio.h>
#include <SFML/Graphics/RenderWindow.h>
#include "window_options.h"
#include "events.h"
#include "particles.h"
#include "draw.h"

static sfRenderWindow *init_window(void)
{
    sfVideoMode vmode = {
        .width = WINDOW_WIDTH,
        .height = WINDOW_HEIGHT,
        .bitsPerPixel = 32
    };
    sfRenderWindow *win = sfRenderWindow_create(
        vmode,
        WINDOW_TITLE,
        WINDOW_STYLE,
        NULL
    );

    return (win);
}

int main(void)
{
    sfRenderWindow *win = init_window();
    sfEvent evt;
    sfUint8 buffer[/* You need to compute the buffer size here with WINDOW_WIDTH and WINDOW_HEIGHT */] = { 0 };

    if (!win) {
        fprintf(stderr, "ERROR: Unable to create window\n");
        return (84);
    }
    init_particles(buffer);
    sfRenderWindow_setFramerateLimit(win, FPS_LIMIT);
    while (sfRenderWindow_isOpen(win)) {
        events(win, evt);
        update_particles(buffer);
        draw(win, buffer);
    }
    return (0);
}
