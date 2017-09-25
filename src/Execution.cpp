#include "Execution.hpp"

IMPLEMENT_APP(Execution)

bool Execution::OnInit() {
    m_controller = make_unique<ProgramController>();
    m_controller->launchProgram();

    return true;
}

int Execution::OnExit(){
//    delete m_controller;

    return 0;
}
