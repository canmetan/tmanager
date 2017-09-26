#include "ConfigurationFileManager.hpp"


// For now, the location for the configuration file is fixed for each platform
#ifdef TARGET_OS_MAC
    #error "TManager isn't being supported on MAC yet."
#elif defined __linux__
    const string configFilePath = "~/.config/tmanager/settings";
#elif defined _WIN32 || defined _WIN64
    #error "TManager isn't being supported on Windows yet."
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
