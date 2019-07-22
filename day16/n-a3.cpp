#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// *c 활용은 c 언어에 배웠고, 밑 코드는 c++ 에서 할수있음 (c++ 에는 둘다 쓰기 가능) 

void KK (int &c) { // a 변수의 주소를 다른 별명으로 선언 
	c = 200; // 10 번지 값에 20을 넣어라 
}

int main(int argc, char** argv) {
//	int *ap = new int;
//	char *cp = new char[4];
//	
//	*ap = 10;
//	
//	cp = "abcd";
//	
//	for(int i = 0 ; i < 4; i++) {
//		cout << *(cp + i);
//	}
//	
//	delete ap;
//	*ap = 100;
//
//	cout << *ap;

	// const 이해 
	const int a = 5;
	
	a = a + 10;
	//KK(a); // 5 값 
	
	cout << "a= " << a << endl;

	return 0;
}
