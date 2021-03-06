/*  core.h - Core libcpak engine.
    
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

#ifndef _CPAK_CORE_H
#define _CPAK_CORE_H

#include <stdio.h>
#include <stdlib.h>

/* Libcpak engine. */

typedef struct cpak_engine_t cpak_engine_t;
struct cpak_engine_t
{
  int error;		        /* Error code generated by the last functional call. */
  char *program_name;		/* Program invocation short name. */
  int argc;			/* Number of command line arguments. */
  char **argv;			/* Pointer to the command line arguments. */
  char *symbol_log;		/* Log symbol. */
  char *symbol_sysfault;	/* Sysfault log symbol. */
  char *symbol_verify;		/* Verify log symbol. */
  char *symbol_assert;		/* Assert log symbol. */
  char *symbol_check;		/* Check log symbol. */
  FILE *sysfault_stream;	/* Where to report sysfaults. */
  FILE *verify_stream;		/* Where to report verifications. */
  FILE *assert_stream;		/* Where to report assertions. */
  FILE *log_stream;		/* Where to log messages. */

};

extern cpak_engine_t cpak_engine;

/* Useful macros. */

#define CPAK_TRUE  1
#define CPAK_FALSE 0

/* Show basic libcpak information. */

void cpak_info(void);

/* Initialize libcpak engine.  */

int cpak_initialize (int, char **);


#endif	/* _CPAK_CORE_H */
