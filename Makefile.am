#  Makefile.am - Top automake file.
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


SUBDIRS = lib src test 
ACLOCAL_AMFLAGS = -I m4

EXTRA_DIST = 

# Clean up custom garbage

export CUSTOM_GARBAGE = *~ \#* *.o
.PHONY clean-garbage:
	rm -f $(CUSTOM_GARBAGE)
	make -C src  clean-garbage
	make -C lib  clean-garbage


