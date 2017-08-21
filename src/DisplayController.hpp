#ifndef DISPLAYCONTROLLER_HPP
#define DISPLAYCONTROLLER_HPP

#include <memory>

#include "MainFrame.hpp"

using std::unique_ptr;
using std::make_unique;

class DisplayController
{
    public:
        DisplayController();
        virtual ~DisplayController();

        void showMainWindow();
        void minimizeToTray();
    private:
        unique_ptr<MainFrame> m_mainFrame;
};

#endif // DISPLAYCONTROLLER_HPP
