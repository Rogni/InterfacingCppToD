#include <iostream>

#include "cpp/istring_view.hpp"
#include "cpp/ispan.hpp"

void print_from_d(IStringView *);

void print_from_cpp(IStringView * view) {
    std::cout << *view;
    StdStringView v(", world");
    print_from_d(&v);
}

void enumerate_span_from_d(ISpan<IStringView *> * span) {
    for (long i = 0; i != span->size(); ++i) {
        std::cout << *(span->at(i)) << std::endl;
    }
}

void enumerate_span_in_d(ISpan<long> * span);

void call_cpp_span() {
    std::vector<long> numbers;
    numbers.push_back(3);
    numbers.push_back(2);
    numbers.push_back(1);
    StdSpanVector<long> vec(numbers);
    enumerate_span_in_d(&vec);
}