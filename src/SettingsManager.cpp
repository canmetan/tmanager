#include "SettingsManager.hpp"

//            m_configPaths.assign(configPaths.begin(),
//                             configPaths.end());
//
//    // Copy the vector to the other one
//    m_configPaths.assign(other.m_configPaths.begin(),
//                         other.m_configPaths.end());
//
//    // PARAMETER const vector<string> &configPaths  = {}
//     = vector<int>()
// void test( vector<int>& vec = vector<int>()
// const vector<string> &configPaths  = {}

#ifdef TARGET_OS_MAC
    #error "Prodapptivity isn't supported on MAC yet"
#elif defined __linux__
    const string settingsFilePath = "~/.config/prodapptivity/settings";
#elif defined _WIN32 || defined _WIN64
    #error "Prodapptivity isn't supported on MAC yet"
#else
    #error "This unknown platform is not supported"
#endif

SettingsManager::SettingsManager() :
    m_configPaths(vector<string>()),
    m_currentConfigIndex(0),
    m_configManager (make_unique<ConfigurationFileManager>())
{
}

SettingsManager::~SettingsManager()
{
}

bool SettingsManager::loadSettings(){
//    wxMessageDialog dialog(nullptr, wxT("Couldn't load the settings"),
//                    wxT("fatal Errr"), wxICON_ERROR);
//    dialog.ShowModal();
    // ADD each entry to settings
    return true;
}
