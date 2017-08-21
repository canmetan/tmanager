#include "MainFrame.hpp"

MainFrame::MainFrame() :
    wxFrame(NULL, -1, wxT("Grit Prodapptivity"), wxPoint(-1, -1),
            wxSize(450, 400))
{
    toolBarColor.Set(wxT("#000000"));

    // TOOLBAR BUTTONS
    //wxImage::AddHandler( new wxPNGHandler );
    //wxBitmap settingsButtonImg(wxT("img/default/add.png"), wxBITMAP_TYPE_PNG);

    m_mainPanel = new wxPanel (this, wxID_ANY);
    m_mainPanel->SetBackgroundColour(toolBarColor);

//    Connect(m_ID_SETTINGS_BUTTON, wxEVT_COMMAND_TOOL_CLICKED,
//    wxCommandEventHandler(MainFrame::handleEvent));
//
//    m_vertialSizer = new wxBoxSizer(wxHORIZONTAL);
//    m_taskPanel = new wxPanel(m_mainPanel);
//    m_calendarPanel = new wxPanel(m_mainPanel);
//    //m_settingsButton = new wxButton(m_mainPanel, m_ID_SETTINGS_BUTTON,
//                                    //wxT("Settings"));
//
//    Centre();
}

MainFrame::~MainFrame()
{
    delete m_mainPanel;
    delete m_toolbar;
//    delete m_taskPanel;
//    delete m_calendarPanel;
//    delete m_settingsButton;
//    delete m_vertialSizer;
//    delete m_horizontalSizer;
}

void MainFrame::handleEvent(wxCommandEvent& WXUNUSED(event)){

}
