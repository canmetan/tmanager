#include "Execution.hpp"

Execution::Execution() : m_ctrler (std::make_unique<ProgramController>())
{
}

Execution::~Execution()
{
}

IMPLEMENT_APP(Execution)

bool Execution::OnInit()
{
    m_ctrler->launchProgram();
    return true;
}
