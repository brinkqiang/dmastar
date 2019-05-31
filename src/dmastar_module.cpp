
// Copyright (c) 2018 brinkqiang (brink.qiang@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "dmastar_module.h"

Cdmastar_module::Cdmastar_module()
{

}

Cdmastar_module::~Cdmastar_module()
{

}

void DMAPI Cdmastar_module::Release(void)
{
    delete this;
}

void DMAPI Cdmastar_module::Test(void)
{
    std::cout << "PROJECT_NAME = dmastar" << std::endl;
    std::cout << "PROJECT_NAME_UP = DMASTAR" << std::endl;
    std::cout << "PROJECT_NAME_LO = dmastar" << std::endl;
}

Idmastar* DMAPI dmastarGetModule()
{
    return new Cdmastar_module();
}