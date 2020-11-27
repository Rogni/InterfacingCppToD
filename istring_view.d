module istring_view;

extern (C++)  {
    interface ISpan(T) {
        long size() const;
        T at(long index) const; 
    }

    interface IStringView {
        long size() const;
        const(char*) data() const;

        final string toString() {
            return data()[0..size()].dup;
        }
    }
}

class DStringView : IStringView {
    private string m_str;
    this(string str) {
        m_str = str;
    }
    
    extern (C++) override {
        long size() const {
            return m_str.length;
        }

        const(char*) data() const {
            return m_str.ptr;
        }
    }
}

