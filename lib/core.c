/*  cpak_core.c - Core libcpak engine.
    
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

#include <config.h>
#include <libcpak.h>

/* 
 *  Global variables. 
 */

cpak_engine_t cpak_engine;


/* 
 *  Public API.
 */


/* Exhibit core information about libcpak.*/

void cpak_info(void)
{
  printf ("%s\n", PACKAGE_STRING);
}

/* Initialize libcpak engine.  */

int cpak_initialize (int argc, char **argv)
{
  char *last_token, *current_token;
  int i;

  /* Command line arguments */

  cpak_engine.argc = argc;

  cpak_engine.argv = (char **) cpak_malloc(argc * sizeof (char *));

  for (i=0; i<argc; i++)
    cpak_engine.argv[i] = cpak_strdup (argv[i]);

  /* Determine program invocation name (without path) */

  current_token = cpak_engine.argv[0];
  last_token = current_token;
  while (*current_token != '\0')
    {
      if (*current_token == '/')
	last_token = current_token;
      current_token++;
    }
  last_token++;
  cpak_engine.program_name= cpak_strdup (last_token);

  /* Log symbol. */

  cpak_engine.symbol_log = (char*) cpak_symbols[cpak_symbol_log];
  cpak_engine.symbol_sysfault = (char *) cpak_symbols[cpak_symbol_sysfault];
  cpak_engine.symbol_verify = (char *) cpak_symbols[cpak_symbol_verify];
  cpak_engine.symbol_assert = (char *) cpak_symbols[cpak_symbol_assert];
  

  /* Default log stream; */

  cpak_engine.sysfault_stream = stderr; /* Standard error. */
  cpak_engine.verify_stream = stderr; /* Standard error. */
  cpak_engine.assert_stream = stderr; /* Standard error. */
  cpak_engine.log_stream = stderr; /* Standard error. */

  return EXIT_SUCCESS;
}



const char *cpak_replaced = CPAK_REPLACED;

/* 
 * Non-public functions and variables.
 */



