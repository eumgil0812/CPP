#include <iostream>
#include <utility>

void process(int& x) {
    std::cout << "lvalue reference\n";
}

void process(int&& x) {
    std::cout << "rvalue reference\n";
}

template <typename T>
void wrapper(T&& arg) {
    process(std::forward<T>(arg)); // preserves original category
}

int main() {
    int a = 10;

    wrapper(a);        // lvalue → calls lvalue reference
    wrapper(42);       // rvalue → calls rvalue reference
}

