#  Makefile.am - For libcpak utility programs
#    
#    Copyright 2013  Francisco Jose Monaco   <monaco.fj@gmail.com>
#
#    This file is part of Libcpak. 
#
#    Libcpak is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    Libcpak is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with .  If not, see <http://www.gnu.org/licenses/>.
#


# Reminder for libcpak.la versioning
#
# Versioning: CURRENT:REVISION:AGE
# CURRENT The latest interface implemented.
# REVISION The implementation number of CURRENT (read: number of bugs fixed...)
# AGE The number of interfaces implemented, minus one.
# The library supports all interfaces between CURRENT − AGE and CURRENT.
#
# If you have 
# not changed the interface (bug fixes)		CURRENT : REVISION+1 : AGE
# augmented the interface (new functions)	CURRENT+1 : 0 : AGE+1
# broken old interface (e.g. removed functions) CURRENT+1 : 0 : 0


CPAK_VERSIONING=0:0:0

# Compiler flags

AM_CFLAGS =  @CPAK_CFLAGS@ -DCPAK_REPLACED="\"@CPAK_REPLACE@\""
AM_CPPFLAGS = @CPAK_CPPFLAGS@ -include ${top_srcdir}/replace/replace.h 

# The libcpak library.

lib_LTLIBRARIES = libcpak.la				# Target
libcpak_la_SOURCES = core.c  sysfun.c messages.c	# Sources
libcpak_la_LDFLAGS = -version-info $(CPAK_VERSIONING) 	# Linker flags
libcpak_la_LIBADD = @LIBOBJS@				# Replacement functions

# The licpak headers.

nobase_include_HEADERS = libcpak.h libcpak/core.h libcpak/sysfun.h libcpak/messages.h
#nobase_include_HEADERS = libcpak.h libcpak/*.h


# Clean custom garbage

.PHONY clean-garbage:
	rm -rf $(CUSTOM_GARBAGE)
