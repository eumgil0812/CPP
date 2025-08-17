// leak_fixed.cpp
#include <vector>

int main() {
    std::vector<char> buf(100 * 1024 * 1024); // automatic lifetime management
    // ... use buf ...
} // buffer is automatically released when leaving scope

