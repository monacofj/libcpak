/*  cpak-info.c - Outputs basic libcpak information.
    
    Copyright 2013  Monaco   <monaco.fj@gmail.com>

    This file is part of Libcpak. 

    Libcpak is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libcpak is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with .  If not, see <http://www.gnu.org/licenses/>. 

*/


#include <stdio.h>
#include <stdlib.h>

#include <config.h>
#include <libcpak.h>

int main (int argc, char **argv)
{

  cpak_initialize (argc, argv);
  cpak_info ();

  printf ("Program name: %s\n", cpak_engine.program_name);

  printf ("Replaced functions: %s\n", cpak_replaced);

  return EXIT_SUCCESS;
}
