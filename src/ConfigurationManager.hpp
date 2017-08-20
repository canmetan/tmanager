/**
*   Responsible for reading and modifying configuration files.
*   Stores the path information into settings file.
**/

#ifndef CONFIGURATIONMANAGER_HPP
#define CONFIGURATIONMANAGER_HPP

#include <vector>

#include "Configuration.hpp"

class ConfigurationManager
{
    public:
        ConfigurationManager(const string &settingsPath);
        virtual ~ConfigurationManager();
    private:
        ConfigurationManager(); // Prevent default constructor

    public:
        bool loadConfig(Configuration &configSettings);
        bool saveConfig();

        bool addConfigPath    (const string &path);
        bool removeConfigPath (const string &path);
        bool removeConfigPath (int index);
    private:
        Configuration m_config;
        int m_currentConfigIndex;
        const string m_settingsPath;
};

#endif // CONFIGURATIONMANAGER_HPP
