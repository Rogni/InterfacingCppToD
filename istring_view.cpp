#include "istring_view.hpp"

StdStringView::StdStringView(std::string_view str) : m_str(str) {

}

long StdStringView::size() const {
    return m_str.size();
}

const char * StdStringView::data() const {
    return m_str.data();
}

std::ostream &operator <<(std::ostream &os, const IStringView &v) {
    std::string_view sv(v.data(), v.size());
    os << sv;
    return os;
}