#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class AA {
	public:
		int a, b;
		
		void KK();
};

class Book {
	public:
		int a, b;
		
		void sum (int a1, int b1) { 
			return a1 + b1;
		}
		
		void (*ap) ();
		void (*ap) (int); 
		void (*ap) (char *); 
		void (*ap) (int, int); 
};

int main(int argc, char** argv) {
	AA a;
	
	AA *ap;
	ap = &a;
	
	// ap 포인터 변수가 가르키는 a 멤버 변수
	//(*ap).a
	
	// a 옵젝트 변수가 가르키는 a 멤버 변수
	//a.a  
	
	// ap 포인터 변수가 가르키는 a 멤버 변수 
	//ap -> a
	
	// 동적 오브젝트 선언 
	//AA *ap = new AA;
	
	// AA *ap;
	// ap = new AA;
	
	Book *bo = new Book;
	(*bo).a = 15;
	bo -> b = 20;
	
	std::cout << (*bo).a << std::endl;
	std::cout << bo -> b << std::endl;
	
	ap = bo.sum(50, 10);
	
	delete bo; // 제거하기 
	
	return 0;
}
