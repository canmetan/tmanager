#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <wx/ustring.h>
#include <wx/string.h>
#include <string>

using std::string;
using std::u16string;

struct Configuration
{
    Configuration(const u16string &titleBarText = u"Prodapptivity",
                  const string &iconPath = "/img/") :
        titleBarText(titleBarText), iconPath (iconPath)
    { } // Empty constructor

    u16string titleBarText;
    string iconPath;
};

#endif // CONFIGURATION_HPP
