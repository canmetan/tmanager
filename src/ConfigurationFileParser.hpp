/**
*   Responsible for reading and modifying configuration files.
*   Stores the path information into settings file.
**/

#ifndef CONFIGURATIONFILEPARSER_HPP
#define CONFIGURATIONFILEPARSER_HPP

#include <fstream>
#include <string>

using std::fstream;
using std::string;

class ConfigurationFileParser
{
    public:
        ConfigurationFileParser();
        virtual ~ConfigurationFileParser();

    private:
        fstream m_fs;
};

#endif // CONFIGURATIONFILEPARSER_HPP
