#pragma once
#include <sharp/char.hpp>

namespace System
{
    class String
    {
    private:
        Char *_chars;
    public:
        int Length = 0;

        String();
        String(const String &other);
        ~String();

        String(const char value[]);

        Char operator[](int index) const { return _chars[index]; }
        const Char &operator[](int index) { return _chars[index]; }
    };
}
