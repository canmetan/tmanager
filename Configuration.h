#ifndef CONFIGURATION_H
#define CONFIGURATION_H


#include <wx/ustring.h>
#include <wx/string.h>
#include <string>

using std::string;
using std::u16string;

class Configuration
{
    public:
        Configuration();
        ~Configuration();

    public:
        wxString getTitle() const;
        void setTitle(wxString title);

    private:
        wxString m_title;

        u16string someString;
};

#endif // CONFIGURATION_H
