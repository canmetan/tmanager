#ifndef SETTINGSMANAGER_HPP
#define SETTINGSMANAGER_HPP

#include <wx/msgdlg.h>
#include <vector>
#include <string>
#include <memory>

#include "ConfigurationManager.hpp"

using std::vector;
using std::string;
using std::unique_ptr;
using std::make_unique;

class SettingsManager
{
    public:
        SettingsManager();
        virtual ~SettingsManager();

    public:
        bool loadSettings();

        bool loadConfig(Configuration &configSettings);
        bool saveConfig(Configuration &configSettings);

        bool addConfigPath    (const string &path);
        bool removeConfigPath (const string &path);
        bool removeConfigPath (int index);
    private:
        vector<string>                   m_configPaths;
        int                              m_currentConfigIndex;
        unique_ptr<ConfigurationManager> m_configManager;
};

#endif // SETTINGSMANAGER_HPP
