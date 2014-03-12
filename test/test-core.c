/*  cpak-test-core.c - Test libcpak core functionality.
    
    Copyright 2013  Francisco Jose Monaco   <monaco.fj@gmail.com>

    This file is part of Libcpak. 

    Libcpak is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libcpak is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with .  If not, see <http://www.gnu.org/licenses/>. 

*/

/* THIS PROGRAM IS INCOMPLETE.  */

#include <stdio.h>
#include <stdlib.h>
#include <libcpak.h>


int main (int argc, char **argv)
{
  int i;
  
  cpak_initialize(argc, argv);

  printf ("Program name: %s, ", cpak_engine.program_name);

  printf ("with %d args: ", cpak_engine.argc);

  for (i=0; i<argc; i++)
    printf ("argv[%d]: %s ", i, cpak_engine.argv[i]);
  printf ("\n");

  cpak_log ("Log number %d\n", 1);

  cpak_sysfault(1);

  cpak_assert (i!=0, NULL);

  cpak_verify (i!=10, cpak_verify_fault, 1);

  printf ("I'm here.\n");

  return EXIT_SUCCESS;
}
