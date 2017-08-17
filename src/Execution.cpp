#include "Execution.h"

Execution::Execution()
{
    m_ctrler = new ProgramController;
}

Execution::~Execution()
{
    delete m_ctrler;
}

IMPLEMENT_APP(Execution)

bool Execution::OnInit()
{
    m_ctrler->launchProgram();
    return true;
}

