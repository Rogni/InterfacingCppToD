#include <iostream>

#include "istring_view.hpp"

void print_from_d(IStringView *);

void print_from_cpp(IStringView * view) {
    std::cout << *view;
    StdStringView v(", world");
    print_from_d(&v);
}