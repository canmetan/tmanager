//#include "MainFrame.hpp"
//
//MainFrame::MainFrame() :
//    wxFrame(nullptr, wxID_ANY, wxT(""), wxPoint(-1, -1), wxSize(450, 400))
//{
//    m_minViewPanel = new MinimalViewPanel  (this);
//    m_stdViewPanel = new StandardViewPanel (this);
//    // Using the default constructor of Configuration
//    Configuration config;
//    reconfigure(config);
//}
//
//MainFrame::MainFrame(const Configuration &config) :
//    wxFrame(nullptr, wxID_ANY, wxT(""), wxPoint(-1, -1), wxSize(450, 400))
//{
//    m_minViewPanel = new MinimalViewPanel  (this);
//    m_stdViewPanel = new StandardViewPanel (this);
//
//    reconfigure(config);
//}
//
//MainFrame::~MainFrame()
//{
//}
//
//void MainFrame::reconfigure(const Configuration &config) {
//
//    // Modifying the perspective
//    switch(m_perspective) {
//    case Perspective::STANDARD:
//        break;
//    case Perspective::MINIMAL:
//        break;
//    default:
//        break;
//    }
//
//    m_perspective = config.m_perspective;
//    config.m_perspective
//
//    m_sizer->Add(m_stdViewPanel, 1, wxEXPAND, 0);
//    m_sizer->Hide(m_stdViewPanel, true);
//}
//
//void MainFrame::setPerspective(const Perspective &perspective) {
//
//}
