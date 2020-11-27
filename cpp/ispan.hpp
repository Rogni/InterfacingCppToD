#ifndef ISPAN_HPP
#define ISPAN_HPP

#include <vector>

template<typename T>
class ISpan {
public:
    virtual long size() const = 0;
    virtual T at(long index) = 0;
};

template<typename T>
class StdSpanVector: public ISpan<T> {
private:
    std::vector<T> &m_c;
public:
    StdSpanVector(std::vector<T> &c): m_c(c) {}

    long size() const override { return m_c.size(); }
    T at(long index) override { return m_c.at(index); }
};

#endif // ISPAN_HPP