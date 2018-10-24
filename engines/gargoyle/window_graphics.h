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

#ifndef GARGOYLE_WINDOW_GRAPHICS_H
#define GARGOYLE_WINDOW_GRAPHICS_H

#include "gargoyle/windows.h"
#include "gargoyle/picture.h"

namespace Gargoyle {

/**
 * Graphics window
 */
class GraphicsWindow : public Window {
private:
	void touch();
public:
	unsigned char _bgnd[3];
	bool _dirty;
	glui32 _w, _h;
	Graphics::ManagedSurface *_surface;
public:
	/**
	 * Constructor
	 */
	GraphicsWindow(Windows *windows, uint32 rock);

	/**
	 * Destructor
	 */
	virtual ~GraphicsWindow();

	/**
	 * Rearranges the window
	 */
	virtual void rearrange(const Common::Rect &box) override;

	/**
	 * Get window split size within parent pair window
	 */
	virtual glui32 getSplit(glui32 size, bool vertical) const override {
		return size;
	}

	/**
	 * Cancel a mouse event
	 */
	virtual void cancelMouseEvent() override { _mouseRequest = false; }

	/**
	 * Cancel a hyperlink event
	 */
	virtual void cancelHyperlinkEvent() override { _hyperRequest = false; }

	/**
	 * Redraw the window
	 */
	virtual void redraw() override;

	virtual glui32 imageDraw(glui32 image, glui32 align, bool scaled, glui32 width = 0,
		glui32 height = 0) override;

	/**
	 * Get the window dimensions
	 */
	void getSize(glui32 *w, glui32 *h) {
		*w = _w;
		*h = _h;
	}
};

} // End of namespace Gargoyle

#endif
