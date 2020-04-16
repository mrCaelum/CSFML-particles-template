/*
** EPITECH HUB WORKSHOP, 2020
** CSFML particles creation
** File description:
** Particles header file
*/

#ifndef PARTICLES_H_
#define PARTICLES_H_

#include <SFML/Config.h>

void init_particles(sfUint8 *frame_buffer);
void update_particles(sfUint8 *frame_buffer);

#endif