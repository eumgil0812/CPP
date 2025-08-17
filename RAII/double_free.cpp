// double_free.cpp
#include <cstdlib>

int main() {
    int* p = (int*)std::malloc(sizeof(int));
    std::free(p);
    std::free(p); // ❌ 두 번 해제
}

