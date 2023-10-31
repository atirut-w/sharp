#include <sharp/console.hpp>
#include <unistd.h>

using namespace System;

void Console::Write(Char value)
{
    write(1, &value, 2);
}

void Console::Write(Char buffer[])
{
    while (*buffer)
        write(1, buffer++, 2);
}
