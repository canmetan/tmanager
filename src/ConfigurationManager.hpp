// Reads and modifies configuration files

#ifndef CONFIGURATIONMANAGER_HPP
#define CONFIGURATIONMANAGER_HPP

#include "Configuration.hpp"

class ConfigurationManager
{
    public:
        ConfigurationManager(const string &configFilePath);
        virtual ~ConfigurationManager();
    private:
        ConfigurationManager(); // Prevent default constructor


        bool loadConfigurationFromFile();
        bool saveConfigurationToFile();
    private:
        const string  m_configFilePath;
        Configuration m_config;
};

#endif // CONFIGURATIONMANAGER_HPP
