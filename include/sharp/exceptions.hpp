#pragma once

namespace System
{
    class Exception
    {
    };

    class SystemException : public Exception
    {
    };

    class IndexOutOfRangeException : public SystemException
    {
    };
}
