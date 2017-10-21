#include "ConfigurationManager.hpp"

ConfigurationManager::ConfigurationManager() {
    //ctor
}

ConfigurationManager::~ConfigurationManager() {
    //dtor
}

// Config Accessors
bool ConfigurationManager::loadCurrentConfig (Configuration &config) const  {
    return true;
}

bool ConfigurationManager::loadDefaultConfig (Configuration &config) {
    return true;
}

bool ConfigurationManager::loadConfig (Configuration &config, const int index) {
    return true;
}

bool ConfigurationManager::loadConfig (Configuration &config,
                                      const string &name) {
    return true;
}

// Config Mutators
bool ConfigurationManager::updateCurrentConfig (const Configuration &config) {
    return true;
}

bool ConfigurationManager::updateConfig (const Configuration &config,
                                         const int index) {
    return true;
}

bool ConfigurationManager::updateConfig (const Configuration &config,
                                         const string &name) {
    return true;
}

bool ConfigurationManager::addConfig (const Configuration &config,
                                      const int index) {
    return true;
}

bool ConfigurationManager::addConfig (const Configuration &config,
                                      const string &name) {
    return true;
}

bool ConfigurationManager::deleteConfig (const string &name) {
    return true;
}

bool ConfigurationManager::deleteConfig (const int index) {
    return true;
}

void ConfigurationManager::trim (std::string& str) const {
    std::size_t first = string.find_first_not_of(" \t\n");
    std::size_t last  = string.find_last_not_of(" \t\n");

    if (first == std::string::npos) // empty string
        string = "";
    else
        string = string.substr(first, last - first + 1);
}
