#include <system/string.hpp>
#include <cstring>

using namespace System;

String::String(const char *chars)
{
    Chars = chars;
    Length = strlen(chars);
}

String::operator const char *() const
{
    return Chars;
}
