#ifndef CONFIGURATIONMANAGER_HPP
#define CONFIGURATIONMANAGER_HPP

//#include <wx/msgdlg.h>
#include <vector>
#include <string>
#include <memory>

#include "ConfigurationFileManager.hpp"
#include "SettingsFileManager.hpp"

using std::vector;
using std::string;
using std::unique_ptr;
using std::make_unique;

class ConfigurationManager
{
    public:
        ConfigurationManager();
        virtual ~ConfigurationManager();

    public:
        bool loadSettings();

        bool loadConfig(Configuration &configSettings);
        bool saveConfig(Configuration &configSettings);

        bool addConfigPath    (const string &path);
        bool removeConfigPath (const string &path);
        bool removeConfigPath (int index);
    private:
        vector<string>                       m_configPaths;
        int                                  m_currentConfigIndex;
        unique_ptr<ConfigurationFileManager> m_configFileManager;
};

#endif // CONFIGURATIONMANAGER_HPP
