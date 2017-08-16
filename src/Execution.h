// ====  Grit Prodapptivity ====
//
// Software for tracking, recording and managing time.
// Distributed under GPL version 2.
// Author: Can Metan

#ifndef EXECUTION_H
#define EXECUTION_H

#include <wx/wx.h>
#include "ProgramController.h"

class Execution : public wxApp
{
    public:
        Execution();
        virtual ~Execution();
        virtual bool OnInit();

    private:
        ProgramController *m_ctrler;
};

#endif // EXECUTION_H
