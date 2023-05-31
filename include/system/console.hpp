#pragma once
#include <system/string.hpp>

namespace System
{
    class Console : public Object
    {
    public:
        static void Write(String &s);
    };
}
