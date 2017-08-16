#include "Execution.h"

Execution::Execution()
{
    m_ctrler = new ProgramController;
    //ctor
}

Execution::~Execution()
{
    //dtor
    delete m_ctrler;
}

IMPLEMENT_APP(Execution)

bool Execution::OnInit()
{
    m_ctrler->launchProgram();
    return true;
}
