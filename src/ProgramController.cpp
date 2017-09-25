#include "ProgramController.hpp"

ProgramController::ProgramController() :
    m_configManager     (make_unique<ConfigurationManager>()),
    m_displayController (make_unique<DisplayController>())
{
}

ProgramController::~ProgramController()
{
}

void ProgramController::launchProgram()
{
//    m_configManager->loadSettings();
//    m_displayController->showMainWindow();
}

void ProgramController::quitProgram(){
    // Any cleanup code here
}
