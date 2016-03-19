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

#ifndef TITANIC_INPUT_HANDLER_H
#define TITANIC_INPUT_HANDLER_H

#include "common/rect.h"
#include "titanic/input_translator.h"

namespace Titanic {

class CGameManager;

class CInputHandler {
private:
	/**
	 * Process and dispatch a passed message
	 */
	void processMessage(const CMessage &msg);
public:
	CGameManager *_gameManager;
	CInputTranslator *_inputTranslator;
	int _field4;
	int _field8;
	int _fieldC;
	int _field10;
	int _field14;
	Common::Point _mousePos;
	int _lockCount;
	int _field24;
public:
	CInputHandler(CGameManager *owner);

	void setTranslator(CInputTranslator *translator);

	/**
	 * Increment the lock count
	 */
	void incLockCount();

	/**
	 * Decrement the lock count on the input handler
	 */
	void decLockCount();

	/**
	 * Handles a genereated mouse message
	 */
	void handleMessage(const CMessage &msg, bool respectLock = true);
};

} // End of namespace Titanic

#endif /* TITANIC_INPUT_HANDLER_H */
