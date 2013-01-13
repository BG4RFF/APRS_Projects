/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2006, 2008 Develer S.r.l. (http://www.develer.com/)
 * All Rights Reserved.
 * -->
 *
 * \brief MCP41 digital potentiometer map definitions.
 *
 * \version $Id: mcp41_map.h 3690 2010-05-13 16:05:39Z asterix $
 *
 * \author Francesco Sacchi <batt@develer.com>
 */

#ifndef MCP41_MAP_H
#define MCP41_MAP_H

#warning TODO:This is an example implentation, you must implement it!

/** \name Enum for mcp41 pot evices.
 * \{
 *
 */
typedef enum Mcp41Dev
{
	MCP41_LED,

	/* put here other mcp41 device */

	MCP41_CNT,
} Mcp41Dev;
/* \} */

#endif /* MCP41_MAP_H */