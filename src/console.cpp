#include <system/console.hpp>
#include <iostream>

using namespace System;

void Console::Write(String &s)
{
    std::cout << s << std::flush;
}
