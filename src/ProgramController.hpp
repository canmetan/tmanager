#ifndef PROGRAMCONTROLLER_HPP
#define PROGRAMCONTROLLER_HPP

#include <memory>

#include "ConfigurationFileManager.hpp"
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
        unique_ptr<ConfigurationFileManager> m_configFileManager;
        unique_ptr<DisplayController>        m_displayController;
};

#endif // PROGRAMCONTROLLER_H
