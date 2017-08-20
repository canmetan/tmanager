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
                  const string         &iconPath     = "/img/default/",
                  const vector<string> &configPaths  = {})               :
        m_titleBarText(titleBarText), m_iconPath (iconPath)
    {
        m_configPaths.assign(configPaths.begin(),
                             configPaths.end());
    }

    Configuration& operator=(const Configuration& other) {
        m_titleBarText = other.m_titleBarText;
        m_iconPath     = other.m_iconPath;

        // Copy the vector to the other one
        m_configPaths.assign(other.m_configPaths.begin(),
                             other.m_configPaths.end());

        return *this;
    }

    u16string      m_titleBarText;
    string         m_iconPath;
    vector<string> m_configPaths;
};

#endif // CONFIGURATION_HPP
