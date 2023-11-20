#include <sharp/string.hpp>
#include <sharp/exceptions.hpp>

using namespace System;

String::String(const String &other)
{
    if (other._chars == nullptr)
        return;

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
    if (value == nullptr)
        return;

    while (value[Length])
        Length++;

    _chars = new Char[Length];
    for (int i = 0; i < Length; i++)
        _chars[i] = value[i];
}

const Char &String::operator[](int index) const
{
    if (index < 0 || index >= Length)
        throw IndexOutOfRangeException("Index was outside the bounds of the array.");
    return _chars[index];
}

void String::operator=(const String &other)
{
    if (this == &other)
        return;

    if (_chars != nullptr)
    {
        delete[] _chars;
        _chars = nullptr;
    }
    if (other._chars == nullptr)
        return;

    Length = other.Length;
    _chars = new Char[Length];
    for (int i = 0; i < Length; i++)
        _chars[i] = other._chars[i];
}
