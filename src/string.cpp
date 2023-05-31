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

String &String::operator+(const String &other) const
{
    char *chars = new char[Length + other.Length + 1];
    strcpy(chars, Chars);
    strcat(chars, other.Chars);
    return *(new String(chars));
}
