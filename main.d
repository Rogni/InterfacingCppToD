import istring_view;

extern (C++) void print_from_cpp(IStringView v);

extern (C++) void print_from_d(IStringView v) {
    import std.stdio: write, writeln;
    writeln(v);
}

int main(string[] args)
{
    print_from_cpp(new DStringView("Hello "));
    return 0;
}