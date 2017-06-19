/*
    MIT License

    Copyright (c) 2017 MARTIAL Alexis

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#ifndef BRISE_INT_H
#define BRISE_INT_H

#include <cstdint>

namespace brise
{
	typedef std::uint8_t			uint8;
	static_assert(sizeof(uint8)==1,"uint8 need to be a 8bits integer");

	typedef std::uint16_t			uint16;
	static_assert(sizeof(uint16)==2,"uint16 need to be a 16bits integer");

	typedef std::uint32_t			uint32;
	static_assert(sizeof(uint32)==4,"uint32 need to be a 32bits integer");

	typedef std::uint64_t 			uint64;
	static_assert(sizeof(uint64)==8,"uint64 need to be a 64bits integer");

	typedef std::int8_t				int8;
	static_assert(sizeof(int8)==1,"uint8 need to be a 8bits integer");

	typedef std::int16_t			int16;
	static_assert(sizeof(int16)==2,"uint16 need to be a 16bits integer");

	typedef std::int32_t			int32;
	static_assert(sizeof(int32)==4,"uint32 need to be a 32bits integer");

	typedef std::int64_t			int64;
	static_assert(sizeof(int64)==8,"uint64 need to be a 64bits integer");
}
#endif
