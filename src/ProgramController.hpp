#ifndef PROGRAMCONTROLLER_HPP
#define PROGRAMCONTROLLER_HPP

#include "SettingsManager.hpp"
#include "MainFrame.hpp"

class ProgramController
{
    public:
        ProgramController();
        ~ProgramController();

        void launchProgram();

    private:
        SettingsManager *m_configManager;
        MainFrame *m_frame;
};

#endif // PROGRAMCONTROLLER_H
