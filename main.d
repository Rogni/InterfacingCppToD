import istring_view;
import ispan;
import std.stdio: writeln;

extern (C++) void print_from_cpp(IStringView v);

extern (C++) void print_from_d(IStringView v) {
    
    writeln(v);
}

extern (C++) void enumerate_span_from_d(ISpan!IStringView);

extern (C++) void call_cpp_span();

extern (C++) void enumerate_span_in_d(ISpan!long span) {
    foreach (long i; 0..span.size()) {
        writeln("Size at ", i, " is ", span.at(i));
    }
}

int main(string[] args)
{
    print_from_cpp(new DStringView("Hello"));
    IStringView[8] strs = [
        new DStringView("0"), 
        new DStringView("1"), 
        new DStringView("2"), 
        new DStringView("3"), 
        new DStringView("4"), 
        new DStringView("5"), 
        new DStringView("6"), 
        new DStringView("7")];
    auto s = make_span(strs);
    enumerate_span_from_d(s);
    call_cpp_span();
    return 0;
}