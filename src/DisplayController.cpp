#include "DisplayController.hpp"

DisplayController::DisplayController() :
    m_mainFrame(make_unique<MainFrame>())
{
}

DisplayController::~DisplayController()
{
}

void DisplayController::showMainWindow(){
    m_mainFrame->Show(true);
}

void DisplayController::minimizeToTray(){
    m_mainFrame->Show(false);
}
