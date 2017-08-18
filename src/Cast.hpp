#ifndef Cast_HPP
#define Cast_HPP

#include <string>

using std::string;
using std::u16string;
using std::u32string;
using std::wstring_convert;

namespace Cast {
    // Casting to normal String
    string ToUTF8(const u16string &s)
    {
        wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conv;
        return conv.to_bytes(s);
    }

    string ToUTF8(const u32string &s)
    {
        wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv;
        return conv.to_bytes(s);
    }

    // Casting to u16string
    u16string ToUTF16(const string &s)
    {
        wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conv;
        return conv.from_bytes(s);
    }

    u16string ToUTF16(const std::u32string &s)
    {
        wstring_convert<std::codecvt_utf16<char32_t>, char32_t> conv;
        string bytes = conv.to_bytes(s);
        return u16string(reinterpret_cast<const char16_t*>(bytes.c_str()),
                              bytes.length()/sizeof(char16_t));
    }

    // Casting to u32string
    u32string ToUTF32(const string &s)
    {
        wstring_convert<codecvt_utf8<char32_t>, char32_t> conv;
        return conv.from_bytes(s);
    }

    u32string ToUTF32(const u16string &s)
    {
        const char16_t *pData = s.c_str();
        wstring_convert<std::codecvt_utf16<char32_t>, char32_t> conv;
        return conv.from_bytes(reinterpret_cast<const char*>(pData),
                               reinterpret_cast<const char*>(pData+s.length()));
    }
}

#endif // Cast_HPP
