// dangling_stack.cpp
#include <iostream>

int* bad() {
    int x = 42;       // 스택에 존재
    return &x;        // 잘못: 스코프 종료 후 사라짐 → 댕글링
}

int main() {
    int* p = bad();
    std::cout << *p << "\n"; // UB (운 좋으면 보이는 값, 보통은 위험)
}

