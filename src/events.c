/*
** EPITECH HUB WORKSHOP, 2020
** CSFML particles creation
** File description:
** Events handler
*/

#include <SFML/Graphics/RenderWindow.h>
#include "events.h"

void events(sfRenderWindow *win, sfEvent evt)
{
    while (sfRenderWindow_pollEvent(win, &evt))
        if (evt.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(win);
}
