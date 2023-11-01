#pragma once
#include <sharp/string.hpp>

namespace System
{
    class Exception
    {
    public:
        String Message;

        Exception() {}
        Exception(String message) : Message(message) {}
    };

    class SystemException : public Exception
    {
    public:
        SystemException() {}
        SystemException(String message) : Exception(message) {}
    };

    class IndexOutOfRangeException : public SystemException
    {
    public:
        IndexOutOfRangeException() {}
        IndexOutOfRangeException(String message) : SystemException(message) {}
    };
}
