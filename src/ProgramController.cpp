#include "ProgramController.hpp"

ProgramController::ProgramController() :
    m_settingsManager (make_unique<SettingsManager>()),
    m_displayController (make_unique<DisplayController>())
{
}

ProgramController::~ProgramController()
{
}

void ProgramController::launchProgram()
{
    m_settingsManager->loadSettings();
    m_displayController->showMainWindow();
}

void ProgramController::quitProgram(){
    // Any cleanup code here
}
