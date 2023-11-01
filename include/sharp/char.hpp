#pragma once
#include <sharp/valuetype.hpp>

namespace System
{
    class Char : public ValueType
    {
    private:
        short value;

    public:
        Char() : value(0) {}
        Char(short value) : value(value) {}
        operator short() const { return value; }
    };
}
