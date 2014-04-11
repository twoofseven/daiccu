/******************************************************************************
 **
 ** Copyright (C) 2012 - 2013 Matthias Benesch <twoof7@freenet.de>. All rights
 ** reserved.
 **
 ** This library is free software; you can redistribute it and/or
 ** modify it under the terms of the GNU Lesser General Public
 ** License as published by the Free Software Foundation; either
 ** version 2 of the License, or (at your option) any later version.
 **
 ** This library is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 ** Lesser General Public License for more details.
 **
 ** You should have received a copy of the GNU Lesser General Public
 ** License along with this library; if not, write to the
 ** Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 ** Boston, MA 02111-1307, USA.
 **
 ******************************************************************************/
#ifndef SOCKETCAN_H
#define SOCKETCAN_H

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#include "can.h"

#if(defined __cplusplus)
extern "C"
{
#endif

canDev* socketCanGet(int argc, char** argv);

bool socketCanOpen(canDev *can);
void socketCanClose(canDev *can);
bool socketCanRun(canDev *can);

bool socketCanTransmit(canDev *can, const uint32_t id, const uint8_t dlc,
                       const char *data);

#if(defined __cplusplus)
}
#endif
#endif
