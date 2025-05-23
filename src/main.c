/*
 * Niv -- a dead simple (and lightweight) game engine for C.
 * ---------------------------------------------------------
 * 
 * Copyright (C) 2025  Mario Rosell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 * ---------------------------------------------------------
 * 
 * This is the main file of the Niv game engine. 
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "incl/windowing.h"
#include "defs.h"

#include <SDL3/SDL.h>

static struct Application app;

int main (void)
  {
    Application__new (&app, "Niv");
    niv_init_window (&app);
    return 0;
  }
