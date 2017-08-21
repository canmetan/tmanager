// ====  Grit Prodapptivity ====
//
// Software for tracking, recording and managing time.
// Distributed under GPL version 2.
//
// Author: Can Metan

#ifndef EXECUTION_HPP
#define EXECUTION_HPP

#include <wx/wx.h>
#include <memory>

#include "ProgramController.hpp"

class Execution : public wxApp
{
    public:
        Execution();
        virtual ~Execution();
        virtual bool OnInit();

    private:
        std::unique_ptr<ProgramController> m_ctrler;
};

#endif // EXECUTION_HPP
