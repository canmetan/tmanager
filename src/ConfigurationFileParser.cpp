#include "ConfigurationFileParser.hpp"


// For now, the location for the configuration file is fixed for each platform
#ifdef TARGET_OS_MAC
    #error "TManager isn't being supported on MAC yet."
#elif defined __linux__
    const string configFilePath = "~/.config/tmanager/config";
#elif defined _WIN32 || defined _WIN64
    #error "TManager isn't being supported on Windows yet."
#else
    #error "This unknown platform is not supported"
#endif


ConfigurationFileParser::ConfigurationFileParser()
{
    // Retrieve setting # from file
}

ConfigurationFileParser::~ConfigurationFileParser()
{
}
