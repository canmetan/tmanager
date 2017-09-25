#ifndef MAINFRAME_HPP
#define MAINFRAME_HPP

#include <wx/wx.h>

#include "Configuration.hpp"
#include "MinimalViewPanel.hpp"
#include "StandardViewPanel.hpp"

//using std::vector;

class MainFrame : public wxFrame
{
    public:
        MainFrame();
        MainFrame(const Configuration &config);
        virtual ~MainFrame();

        void reconfigure(const Configuration &config);
        void setPerspective(const Perspective &perspective);

    private:
        wxBoxSizer        *m_sizer;
        MinimalViewPanel  *m_minViewPanel;
        StandardViewPanel *m_stdViewPanel;

        Perspective       m_perspective;
};
#endif // MAINFRAME_H
