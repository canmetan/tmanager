#include "ConfigurationManager.hpp"

ConfigurationManager::ConfigurationManager(const string &configFilePath) :
    m_configFilePath(configFilePath)
{
}

ConfigurationManager::~ConfigurationManager()
{
}

bool loadConfigFromFile () {
    return true;
}

bool saveConfigurationToFile() {
    return true;
}
