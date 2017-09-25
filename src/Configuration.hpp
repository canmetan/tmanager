#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

//#include <wx/ustring.h>
//#include <wx/string.h>
#include <string>
#include <vector>

using std::string;
using std::u16string;
using std::vector;

enum class Perspective {
    STANDARD = 2,
    MINIMAL
};

struct Point2D {
    Point2D (int x = -1,
             int y = -1) {}
    int m_x;
    int m_y;
};

const Point2D POINT2D_CENTER = Point2D(-1, -1);

struct Configuration
{
    Configuration(const u16string   &titleBarText = u"HuHuuu",
                  const string      &iconPath     = "/img/default/",
                  const Perspective &perspective  = Perspective::STANDARD,
                  const Point2D &topLeftCoordinate = POINT2D_CENTER):
                  m_titleBarText(titleBarText),
                  m_iconPath (iconPath),
                  m_perspective(perspective),
                  m_topLeftCoordinate(topLeftCoordinate)
    { }

    Configuration& operator=(const Configuration& other) {
        m_titleBarText = other.m_titleBarText;
        m_iconPath     = other.m_iconPath;

        return *this;
    }

    u16string   m_titleBarText;
    string      m_iconPath;
    Perspective m_perspective;
    Point2D     m_topLeftCoordinate; // -1, -1 to center.
};

#endif // CONFIGURATION_HPP
