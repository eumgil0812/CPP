#include <iostream>
#include <memory>

std::unique_ptr<int> make_ptr() {
    auto p = std::make_unique<int>(42);
    return p; // 소유권 이동
}

int main() {
    auto p = make_ptr();
    std::cout << *p << "\n"; // 스코프 끝나면 자동 해제
}

