#include "Configuration.h"

Configuration::Configuration()
{
    //ctor
}

Configuration::~Configuration()
{
    //dtor
}

wxString Configuration::getTitle() const {
    return m_title;
}

void Configuration::setTitle(wxString title) {
    m_title = title;
}
