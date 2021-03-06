/*  sysfun.c - Handy wrappers for common libc functions.
    
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



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>

#include <config.h>
#include <libcpak.h>


/* LIBCPAK CONVENTIONS FOR SYSTEM FUNCTIONS

   Wrapper functions shall have the same interface than the corresponding
   standard functions, and also shall behave the same on success, producing
   the same result.

   All standard library calls shall be checked with cpak_sysfault macro.

   If there are invalid parameters prone to cause standard library to fail,
   it is strongly encouraged that those be checked with cpak_verify macro. 

 */

/* On sucess, works like malloc. */

void *cpak_malloc(size_t size)
{
  void *block;
  block = malloc (size);
  cpak_sysfault (!block);
  return block;
}


/* On success, works like strdup. */

char * cpak_strdup (const char *string)
{
  char *new_string;

  /* Verify if 'string' is non NULL. */
  cpak_verify (!string, cpak_verify_invalid_argument, NULL); 

  new_string = strdup (string);
  cpak_sysfault (!new_string);

  return new_string;
}


