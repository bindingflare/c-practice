#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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

	int a = 5;
	KK(a); // 5 값 
	
	cout << "a= " << a << endl;

	return 0;
}
