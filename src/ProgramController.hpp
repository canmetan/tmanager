#ifndef PROGRAMCONTROLLER_H
#define PROGRAMCONTROLLER_H

#include "MainFrame.h"

class ProgramController
{
    public:
        ProgramController();
        ~ProgramController();

        void launchProgram();

    private:
        MainFrame *m_frame;
};

#endif // PROGRAMCONTROLLER_H
