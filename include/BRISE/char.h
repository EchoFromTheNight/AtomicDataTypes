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

#ifndef BRISE_CHAR_H
#define BRISE_CHAR_H

namespace brise
{
	typedef char				char8;
	static_assert(sizeof(char8)==1,"char8 needs to be a 8 bits chararacter !");
	typedef char16_t				char16;
	static_assert(sizeof(char16)==2,"char16 needs to be a 16 bits chararacter !");
	typedef char32_t				char32;
	static_assert(sizeof(char32)==4,"char32 needs to be a 32 bits chararacter !");
}
#endif
