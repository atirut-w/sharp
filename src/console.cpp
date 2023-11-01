#include <sharp/console.hpp>
#include <unistd.h>

using namespace System;

void Console::Write(String value)
{
    for (int i = 0; i < value.Length; i++)
        write(1, &value[i], 2);
}

void Console::Write(Char value)
{
    write(1, &value, 2);
}

void Console::Write(Char buffer[])
{
    while (*buffer)
        write(1, buffer++, 2);
}

void Console::WriteLine(String value)
{
    Write(value);
    write(1, "\n", 1);
}

void Console::WriteLine(Char value)
{
    Write(value);
    write(1, "\n", 1);
}

void Console::WriteLine(Char buffer[])
{
    Write(buffer);
    write(1, "\n", 1);
}
