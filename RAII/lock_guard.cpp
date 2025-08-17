#include <mutex>
void f(std::mutex& m) {
    std::lock_guard<std::mutex> lock(m); // 예외/조기리턴에도 자동 unlock
    // ...
}

