#include "MainFrame.h"

#include <wx/wx.h>
#include <wx/notebook.h>

MainFrame::MainFrame(const wxString title) :
    wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(450, 400))
{
    m_mainPanel = new wxPanel (this, wxID_ANY);
    m_tabs = new wxNotebook(this, -1, wxPoint(-1, -1),
      wxSize(-1, -1), wxNB_BOTTOM);


}

MainFrame::~MainFrame()
{
}
