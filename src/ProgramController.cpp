#include "ProgramController.hpp"

ProgramController::ProgramController()
{
}

ProgramController::~ProgramController()
{
    delete m_frame;
}

void ProgramController::launchProgram()
{
    m_frame = new MainFrame;
    m_frame->Show(true);
}
