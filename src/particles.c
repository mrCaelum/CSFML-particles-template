/*
** EPITECH HUB WORKSHOP, 2020
** CSFML particles creation
** File description:
** WORK HERE
*/

#include <stdlib.h>
#include "window_options.h"
#include "particles.h"

void init_particles(sfUint8 *buffer)
{
    for (size_t i = 0; i < WINDOW_WIDTH * WINDOW_WIDTH * 4; i += 4) {
        buffer[i] = 255;
        buffer[i + 1] = 100;
        buffer[i + 2] = 100;
        buffer[i + 3] = 255;
    }
}

void update_particles(sfUint8 *buffer)
{
    (void)buffer;
}