#ifndef PROGRAMCONTROLLER_HPP
#define PROGRAMCONTROLLER_HPP

#include "MainFrame.hpp"

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
