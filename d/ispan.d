module ispan;

extern (C++) interface ISpan(T) {
    long size() const;
    T at(long index); 
}

class DSpan(T) : ISpan!T 
{
    private T[] m_c;
    this(T[] c) {
        m_c = c;
    }

    extern (C++) override long size() const {
        return m_c.length;
    }
    extern (C++) override T at(long index) {
        return m_c[index];
    }
}

DSpan!(T) make_span(T)(T[] arg) {
    return new DSpan!(T)(arg);
}

