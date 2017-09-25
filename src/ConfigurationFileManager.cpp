#include "ConfigurationFileManager.hpp"

#ifdef TARGET_OS_MAC
    #error "Prodapptivity isn't supported on MAC yet"
#elif defined __linux__
    const string settingsFilePath = "~/.config/prodapptivity/settings";
#elif defined _WIN32 || defined _WIN64
    #error "Prodapptivity isn't supported on MAC yet"
#else
    #error "This unknown platform is not supported"
#endif

ConfigurationFileManager::ConfigurationFileManager()
{
    // Retrieve setting # from file
}

ConfigurationFileManager::~ConfigurationFileManager()
{
}

//bool ConfigurationFileManager::loadConfiguration () {
//    return true;
//}
//
//bool ConfigurationFileManager::saveConfiguration() {
//    return true;
//}
