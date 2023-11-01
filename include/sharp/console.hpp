#pragma once
#include <sharp/char.hpp>
#include <sharp/string.hpp>

namespace System
{
    class Console
    {
    public:
        static void Write(String value);
        static void Write(Char value);
        static void Write(Char buffer[]);

        static void WriteLine(String value);
        static void WriteLine(Char value);
        static void WriteLine(Char buffer[]);
    };
}
