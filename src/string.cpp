#include <sharp/string.hpp>

using namespace System;

String::String()
{
    _chars = new Char[1];
    _chars[0] = '\0';
}

String::~String()
{
    delete[] _chars;
}

String::String(const char value[])
{
    while (value[Length])
        Length++;
    _chars = new Char[Length];
    for (int i = 0; i < Length; i++)
        _chars[i] = value[i];
}
