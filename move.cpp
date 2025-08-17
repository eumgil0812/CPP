#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5};

    // Copy: duplicates 'a' into 'b' (expensive)
    std::vector<int> b = a;
    std::cout << "After copy, a.size() = " << a.size() << "\n"; // 5

    // Move: transfers 'a' into 'c' (a is left empty)
    std::vector<int> c = std::move(a);
    std::cout << "After move, a.size() = " << a.size() << "\n"; // 0
}

