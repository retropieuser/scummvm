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

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

// Based on eos' BitStream implementation

#include "common/scummsys.h"

#ifndef USE_BINK

#error "BitStream support disabled because Bink support is disabled"

#else

#ifndef COMMON_BITSTREAM_H
#define COMMON_BITSTREAM_H

#include "common/scummsys.h"

namespace Common {

class SeekableReadStream;

/** A bit stream. */
class BitStream {
public:
	BitStream();
	virtual ~BitStream();

	/** Read a bit. */
	virtual uint32 getBit() = 0;

	/** Read a number of bits. */
	virtual uint32 getBits(uint32 n) = 0;

	/** Adding another bit. */
	virtual void addBit(uint32 &x, uint32 n) = 0;

	/** Skip a number of bits. */
	void skip(uint32 n);

	/** Get the current position. */
	virtual uint32 pos()  const = 0;
	/** Return the number of bits in the stream. */
	virtual uint32 size() const = 0;
};

/** A big endian bit stream. */
class BitStreamBE : public BitStream {
public:
	BitStreamBE(SeekableReadStream &stream, uint32 bitCount);
	BitStreamBE(const byte *data, uint32 bitCount);
	~BitStreamBE();

	uint32 getBit();
	uint32 getBits(uint32 n);
	void addBit(uint32 &x, uint32 n);

	uint32 pos()  const;
	uint32 size() const;

private:
	SeekableReadStream *_stream;

	byte  _value;   ///< Current byte.
	uint8 _inValue; ///< Position within the current byte.
};

/** A 32bit little endian bit stream. */
class BitStream32LE : public BitStream {
public:
	BitStream32LE(SeekableReadStream &stream, uint32 bitCount);
	BitStream32LE(const byte *data, uint32 bitCount);
	~BitStream32LE();

	uint32 getBit();
	uint32 getBits(uint32 n);
	void addBit(uint32 &x, uint32 n);

	uint32 pos()  const;
	uint32 size() const;

private:
	SeekableReadStream *_stream;

	uint32 _value;   ///< Current 32bit value.
	uint8  _inValue; ///< Position within the current 32bit value.
};

} // End of namespace Common

#endif // COMMON_BITSTREAM_H

#endif // USE_BINK