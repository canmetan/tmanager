#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <wx/ustring.h>
#include <wx/string.h>
#include <string>
#include <vector>

using std::string;
using std::u16string;
using std::vector;

struct Configuration
{
    Configuration(const u16string      &titleBarText = u"Prodapptivity",
                  const string         &iconPath     = "/img/default/")
                  : m_titleBarText(titleBarText), m_iconPath (iconPath)
    {  }

    Configuration& operator=(const Configuration& other) {
        m_titleBarText = other.m_titleBarText;
        m_iconPath     = other.m_iconPath;

        return *this;
    }

    u16string      m_titleBarText;
    string         m_iconPath;
};

#endif // CONFIGURATION_HPP
