#include "ConfigurationManager.hpp"

ConfigurationManager::ConfigurationManager() :
    m_settingsPath(const string &settingsPath)
{
    m_currentConfigIndex = 0;
    // Retrieve setting # from file
}

ConfigurationManager::~ConfigurationManager()
{
}

bool ConfigurationManager::loadConfiguration () {
    return true;
}

bool ConfigurationManager::saveConfiguration() {
    return true;
}
