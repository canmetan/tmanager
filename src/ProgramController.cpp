#include "ProgramController.h"

#include "ViewGlobals.h"

ProgramController::ProgramController()
{
}

ProgramController::~ProgramController()
{
    delete m_frame;
}

void ProgramController::launchProgram()
{
    m_frame = new MainFrame(G_PROGRAM_TITLE);
    m_frame->Show(true);
}
