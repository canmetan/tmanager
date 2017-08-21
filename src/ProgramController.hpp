#ifndef PROGRAMCONTROLLER_HPP
#define PROGRAMCONTROLLER_HPP

#include <memory>

#include "SettingsManager.hpp"
#include "MainFrame.hpp"

//using std::unique_ptr;
//using std::make_unique;

class ProgramController
{
    public:
        ProgramController();
        ~ProgramController();

        void launchProgram();

    private:
        std::unique_ptr<SettingsManager> m_settingsManager;
        std::unique_ptr<MainFrame>       m_frame;
};

#endif // PROGRAMCONTROLLER_H

