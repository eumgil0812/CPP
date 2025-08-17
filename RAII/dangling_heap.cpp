// dangling_heap.cpp
#include <iostream>

int main() {
    int* p = new int(7);
    delete p;               // 해제
    std::cout << *p << "\n"; // ❌ use-after-free
}
