// ====  Grit Chrono ====
//
// A simple time tracker software.
// Distributed under GPL version 2.
//
// Author: Can Metan

#ifndef EXECUTION_HPP
#define EXECUTION_HPP

#include <memory>
#include <wx/wx.h>

#include "ProgramController.hpp"

using std::unique_ptr;
using std::make_unique;

class Execution : public wxApp
{
    public:
        virtual bool OnInit();
        virtual int OnExit();
    private:
        unique_ptr<ProgramController> m_controller;
};

#endif // EXECUTION_HPP
