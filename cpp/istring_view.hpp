#ifndef ISTRING_VIEW_HPP 
#define ISTRING_VIEW_HPP

#include <string_view>
#include <ostream>

class IStringView {
public: 
    virtual long size() const = 0;
    virtual const char * const data() const = 0;
};


class StdStringView : public IStringView
{
private:
    std::string_view m_str;
public:
    StdStringView() = default;
    StdStringView(std::string_view);

    long size() const override;
    const char * const data() const override;
};

std::ostream &operator <<(std::ostream &os, const IStringView &v);

#endif // ISTRING_VIEW_HPP