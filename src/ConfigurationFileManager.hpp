/**
*   Responsible for reading and modifying configuration files.
*   Stores the path information into settings file.
**/

#ifndef CONFIGURATIONFILEMANAGER_HPP
#define CONFIGURATIONFILEMANAGER_HPP

#include <fstream>
#include <string>

using std::fstream;
using std::string;

class ConfigurationFileManager
{
    public:
        ConfigurationFileManager();
        virtual ~ConfigurationFileManager();

};

#endif // CONFIGURATIONFILEMANAGER_HPP
