#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class AA {
	public:
		int a, b;
		
		void KK();
};

class Book {

};

void Month(int a) {
	std::cout << a << "���Դϴ�" << std::endl;
}

void Day(int a) {
	std::cout << a << "���Դϴ�" << std::endl;	
}

void YearMonth(int a, int b) {
	std::cout << a << "�� " << b << "�� " << std::endl; 
}

void *RT1(int a) {
	a == 1? Month(a):Day(a);
}

int Sum(int a, int b) {
	return a + b;
}

int Sub(int a, int b) {
	return a - b;
}

void *RT2(int a) {
	a == 1? Sum(a, b):Sub(a, b);
}

int main(int argc, char** argv) {
	void (*ap)(int); // ��� �Լ� ����Ʈ ���� ���� 
	int (*bp)(int, int); 
	
	ap = (void (*)(int)) RT1(1);
	bp = (int (*)(int, int)) RT2(1); 
	
	(*ap)(2);
	(*bp)(2);
	
	return 0;
}
