#include "MainFrame.h"

#include <wx/wx.h>
#include <wx/notebook.h>

MainFrame::MainFrame() :
    wxFrame(NULL, -1, "Grit Prodapptivity", wxPoint(-1, -1), wxSize(450, 400))
{
    m_mainPanel = new wxPanel (this, wxID_ANY);

    // Toolbar on top
    wxImage::AddHandler( new wxPNGHandler );

    //wxBitmap exit(wxT("../img/add-1.png"), wxBITMAP_TYPE_PNG);
    wxBitmap settingsImg(wxT("img/add-1.png"), wxBITMAP_TYPE_PNG);
//
    wxToolBar *toolbar = CreateToolBar();
    //toolbar->InsertTool()
    toolbar->AddTool(m_SETTINGS_BUT_ID, settingsImg, wxT("Open settings"));
    toolbar->Realize();
//
    Connect(m_SETTINGS_BUT_ID, wxEVT_COMMAND_TOOL_CLICKED,
    wxCommandEventHandler(MainFrame::handleEvent));

    m_vertialSizer = new wxBoxSizer(wxHORIZONTAL);
    m_taskPanel = new wxPanel(m_mainPanel);
    m_calendarPanel = new wxPanel(m_mainPanel);
    m_settingsButton = new wxButton(m_mainPanel, m_SETTINGS_BUT_ID,
                                    wxT("Settings"));

    Centre();
}

MainFrame::~MainFrame()
{
}

void MainFrame::handleEvent(wxCommandEvent& WXUNUSED(event)){

}
