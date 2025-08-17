// file_stream.cpp
#include <fstream>

int main() {
    std::ofstream ofs("out.txt"); // 생성자에서 자동 open
    ofs << "hello\n";             // 스트림에 쓰기
} // main 끝날 때 ofs 소멸 → 자동 close

