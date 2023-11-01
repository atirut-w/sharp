#include <sharp/string.hpp>
#include <sharp/exceptions.hpp>

using namespace System;

String::String(const String &other)
{
    Length = other.Length;
    _chars = new Char[Length];
    for (int i = 0; i < Length; i++)
        _chars[i] = other._chars[i];
}

String::~String()
{
    if (_chars != nullptr)
        delete[] _chars;
}

String::String(const char value[])
{
    while (value[Length])
        Length++;
    if (Length == 0)
        return;

    _chars = new Char[Length];
    for (int i = 0; i < Length; i++)
        _chars[i] = value[i];
}

Char String::operator[](int index) const
{
    if (index < 0 || index >= Length)
        throw IndexOutOfRangeException("Index was outside the bounds of the array.");
    return _chars[index];
}

const Char &String::operator[](int index)
{
    if (index < 0 || index >= Length)
        throw IndexOutOfRangeException("Index was outside the bounds of the array.");
    return _chars[index];
}
