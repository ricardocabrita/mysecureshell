/*
MySecureShell permit to add restriction to modified sftp-server
when using MySecureShell as shell.
Copyright (C) 2006 Sebastien Tardif

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation (version 2)

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef _ENCODE_H_
#define _ENCODE_H_

#include <sys/stat.h>
#include <sys/time.h>
#include "Buffer.h"

tAttributes	*GetAttributes(tBuffer *bIn);
void		StatToAttributes(struct stat *st, tAttributes *a, char *fileName);
void		EncodeAttributes(tBuffer *b, tAttributes *a);
struct timeval	*AttributesToTimeval(const tAttributes *a);

#endif //_ENCODE_H_
