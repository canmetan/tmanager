#include "DisplayController.hpp"

DisplayController::DisplayController()
{
    m_mainFrame = new MainFrame;
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
