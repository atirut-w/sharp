#pragma once
#include <sharp/object.hpp>
#include <sharp/char.hpp>

namespace System
{
    /**
     * @brief Represents text as a sequence of UTF-16 code units.
    */
    class String : public Object
    {
    private:
        Char *_chars = nullptr;

    public:
        int Length = 0;

        String(){};
        String(const String &other);
        ~String();

        String(const char value[]);

        Char operator[](int index) const;
        const Char &operator[](int index);
        void operator=(const String &other);
    };
}
