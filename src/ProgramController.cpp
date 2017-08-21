#include "ProgramController.hpp"

ProgramController::ProgramController() :
    m_settingsManager (std::make_unique<SettingsManager>()),
    m_frame (std::make_unique<MainFrame>())
{
}

ProgramController::~ProgramController()
{
}

void ProgramController::launchProgram()
{
    m_settingsManager->loadSettings();
    // TODO FRAME
    //m_frame->SetTitle()
    m_frame->Show(true);
}
