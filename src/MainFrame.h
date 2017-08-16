#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>
#include <wx/notebook.h>
#include <vector>

using std::vector;

enum class ViewType {
    STANDARD = 10,
    MINIMAL = 20,
    TRAY = 30
};

class MainFrame : public wxFrame
{
    public:
        MainFrame(const wxString title);
        virtual ~MainFrame();

        bool updateView();

    private:
        wxNotebook *m_tabs;
        wxPanel    *m_mainPanel;
        wxPanel    *m_toolBarPanel;
};

#endif // MAINFRAME_H

// 3 types of view types:
// Standard view
// Minimal view
// System tray view
