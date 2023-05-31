#pragma once
#include <system/object.hpp>

namespace System
{
    class String : public Object
    {
    public:
        const char *Chars;
        int Length;

        String(const char *chars);
        operator const char *() const;
    };
}
