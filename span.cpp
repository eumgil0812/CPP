#include <span>
#include <iostream>

void print(std::span<int> s) {
    for (int x : s) std::cout << x << " ";
    std::cout << "\n";
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr); // 배열도 자동 변환
}

