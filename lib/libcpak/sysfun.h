/*  sysfun.h - Wrapper for system functions with error checking.
    
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

#ifndef _LIBCPAK_SYSFUN_H
#define _LIBCPAK_SYSFUN_H

/* Wrapper for malloc */
void * cpak_malloc(size_t size);

/* Wrapper for strdup */
char * cpak_strdup (const char *string);


#endif	/* _LIBCPAK_SYSFUN_H */
