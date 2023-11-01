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
