// double_free_fixed.cpp
#include <memory>
int main() {
    auto p = std::make_unique<int>(123);
    // unique_ptr는 복사 불가(복사 시도 자체가 컴파일 에러),
    // 이동은 1개 소유권만 유지 → double free 원천 차단
}

