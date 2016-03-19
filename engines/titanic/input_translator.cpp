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

#include "titanic/input_handler.h"
#include "titanic/input_translator.h"
#include "titanic/events.h"
#include "titanic/messages/mouse_messages.h"

namespace Titanic {

CInputTranslator::CInputTranslator(CInputHandler *inputHandler) :
		_inputHandler(inputHandler) {
	inputHandler->setTranslator(this);
}

int CInputTranslator::getButtons(int special) const {
	int buttons = 0;
	if (special & MK_LBUTTON)
		buttons |= MB_LEFT;
	if (special & MK_MBUTTON)
		buttons |= MB_MIDDLE;
	if (special & MK_RBUTTON)
		buttons |= MB_RIGHT;

	return buttons;
}

void CInputTranslator::mouseMove(int special, const Common::Point &pt) {
	CMouseMoveMsg msg(pt, getButtons(special));
	_inputHandler->handleMessage(msg);
}

void CInputTranslator::leftButtonDown(int special, const Common::Point &pt) {

}

void CInputTranslator::leftButtonUp(int special, const Common::Point &pt) {

}

void CInputTranslator::leftButtonDoubleClick(int special, const Common::Point &pt) {

}

void CInputTranslator::middleButtonDown(int special, const Common::Point &pt) {

}

void CInputTranslator::middleButtonUp(int special, const Common::Point &pt) {

}

void CInputTranslator::middleButtonDoubleClick(int special, const Common::Point &pt) {

}

void CInputTranslator::rightButtonDown(int special, const Common::Point &pt) {

}

void CInputTranslator::rightButtonUp(int special, const Common::Point &pt) {

}

void CInputTranslator::rightButtonDoubleClick(int special, const Common::Point &pt) {

}

} // End of namespace Titanic
