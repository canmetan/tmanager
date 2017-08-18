#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP


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
        u16string getTitle() const;
        void setTitle(u16string title);

    private:
        u16string m_title;
};

#endif // CONFIGURATION_HPP
