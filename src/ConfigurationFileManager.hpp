/**
*   Responsible for reading and modifying configuration files.
*   Stores the path information into settings file.
**/

#ifndef CONFIGURATIONFILEMANAGER_HPP
#define CONFIGURATIONFILEMANAGER_HPP

#include <fstream>

#include "Configuration.hpp"

using std::fstream;

class ConfigurationFileManager
{
    public:
        ConfigurationFileManager();
        virtual ~ConfigurationFileManager();

    public:
        // Config Accessors
        bool loadCurrentConfig(Configuration &config) const;
        bool loadDefaultConfig(Configuration &config) const;
        bool loadConfig(Configuration &config, const int index);
        bool loadConfig(Configuration &config, const string &name);

        // Config Mutators
        bool updateCurrentConfig (const Configuration &config);
        bool updateConfig (const Configuration &config, const int    index);
        bool updateConfig (const Configuration &config, const string &name);
        bool addConfig    (const Configuration &config, const int    index);
        bool addConfig    (const Configuration &config, const string &name);
        bool deleteConfig (const string        &name);
        bool deleteConfig (const int           index);

    private:
        vector<string> m_configList;
        int            m_currentConfigIndex;
        fstream        m_fs;
};

#endif // CONFIGURATIONFILEMANAGER_HPP
