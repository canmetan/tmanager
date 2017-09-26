#ifndef CONFIGURATIONMANAGER_H
#define CONFIGURATIONMANAGER_H


#include <fstream>

#include "Configuration.hpp"

class ConfigurationManager
{
    public:
        ConfigurationManager();
        virtual ~ConfigurationManager();

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
//        vector<string> m_configList;
//        int            m_currentConfigIndex;
        fstream        m_fs;
};

#endif // CONFIGURATIONMANAGER_H
