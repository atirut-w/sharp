#pragma once
#include <system/valuetype.hpp>

namespace System
{
    class Char : public ValueType
    {
    private:
        short Value;
    public:
        const int MaxValue = 0xffff;
        const int MinValue = 0x0000;

        Char(unsigned char);
    };
}
