#ifndef PROGRAMCONTROLLER_HPP
#define PROGRAMCONTROLLER_HPP

#include <memory>

#include "SettingsManager.hpp"
#include "DisplayController.hpp"

using std::unique_ptr;
using std::make_unique;

class ProgramController
{
    public:
        ProgramController();
        ~ProgramController();

        void launchProgram();
        void quitProgram();

    private:
        unique_ptr<SettingsManager>   m_settingsManager;
        unique_ptr<DisplayController> m_displayController;
};

#endif // PROGRAMCONTROLLER_H
