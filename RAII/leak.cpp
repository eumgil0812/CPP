// leak.cpp

#include <cstdlib>

int main(){
	//100MB 할당 (의도적으로 크게)
	size_t N = 100*1024*1024;
	char* buf=(char*)std::malloc(N);
        //실수 : free(buf)없이 종료->누수
	return 0;
}
