/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */
#ifndef SLUDGE_FREEZE_H
#define SLUDGE_FREEZE_H

#include "graphics/surface.h"

namespace Sludge {

struct frozenStuffStruct {
	onScreenPerson *allPeople;
	screenRegion *allScreenRegions;
	Graphics::Surface backdropSurface;
	Graphics::Surface lightMapSurface;
	Graphics::Surface zBufferImage;
	int zPanels;
	parallaxLayer *parallaxStuff;
	int lightMapNumber, zBufferNumber;
	speechStruct *speech;
	statusStuff *frozenStatus;
	eventHandlers *currentEvents;
	personaAnimation *mouseCursorAnim;
	int mouseCursorFrameNum;
	int cameraX, cameraY, sceneWidth, sceneHeight;
	float cameraZoom;

	frozenStuffStruct *next;
};

bool freeze();
void unfreeze(bool killImage = true);
int howFrozen();

} // End of namespace Sludge

#endif
