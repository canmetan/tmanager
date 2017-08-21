#ifndef MAINFRAME_HPP
#define MAINFRAME_HPP

#include <wx/wx.h>
//#include <wx/notebook.h>
#include <vector>

//#include "Configuration.hpp"

using std::vector;

class MainFrame : public wxFrame
{
    public:
        MainFrame();
        virtual ~MainFrame();

        bool updateView();

        void handleEvent(wxCommandEvent& WXUNUSED(event));

    private:
        wxPanel    *m_mainPanel;
//        wxPanel    *m_taskPanel;
//        wxPanel    *m_calendarPanel;
//
//        wxButton   *m_settingsButton;
//
//        wxBoxSizer *m_vertialSizer;
//        wxBoxSizer *m_horizontalSizer;

        // IDs for events
        const int m_ID_SETTINGS_BUTTON = 100;
};
#endif // MAINFRAME_H
