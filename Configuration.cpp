#include "Configuration.h"

Configuration::Configuration()
{
}

Configuration::~Configuration()
{
}

u16string Configuration::getTitle() const {
    return m_title;
}

void Configuration::setTitle(u16string title) {
    m_title = title;
    m_title.ToStdWstring()
}
