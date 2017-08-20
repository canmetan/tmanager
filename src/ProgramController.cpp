#include "ProgramController.hpp"

ProgramController::ProgramController()
{
    #ifdef TARGET_OS_MAC
        #error "Prodapptivity isn't supported on MAC yet"
    #elif defined __linux__

    #elif defined _WIN32 || defined _WIN64
        #error "Prodapptivity isn't supported on MAC yet"
    #else
        #error "unknown platform"
    #endif

    const static string configPath = "~/.config/prodapptivity/config"

    //m_frame->SetTitle()
    m_frame->Show(true);
}

ProgramController::~ProgramController()
{
}

void ProgramController::launchProgram()
{
}
