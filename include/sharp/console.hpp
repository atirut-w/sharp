#pragma once
#include <sharp/char.hpp>

namespace System
{
    class Console
    {
    public:
        static void Write(Char value);
        static void Write(Char buffer[]);

        static void WriteLine(Char value);
        static void WriteLine(Char buffer[]);
    };
}
