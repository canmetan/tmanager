#ifndef CONFIGURATIONMANAGER_H
#define CONFIGURATIONMANAGER_H

#include <fstream>
#include <string>

#include "Configuration.hpp"
#include "ConfigurationFileParser.hpp"

using std::fstream;
using std::string;

class ConfigurationManager
{
    public:
        ConfigurationManager();
        virtual ~ConfigurationManager();

    public:
        // Config Accessors
        bool loadCurrentConfig(Configuration &config) const;
        bool loadDefaultConfig(Configuration &config);
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
        void trimLR(string& str) const;
    private:
        fstream m_fs;
//        vector<string> m_configList;
//        int            m_currentConfigIndex;
};

#endif // CONFIGURATIONMANAGER_H
