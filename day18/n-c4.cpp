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
	
	// ap ������ ������ ����Ű�� a ��� ����
	//(*ap).a
	
	// a ����Ʈ ������ ����Ű�� a ��� ����
	//a.a  
	
	// ap ������ ������ ����Ű�� a ��� ���� 
	//ap -> a
	
	// ���� ������Ʈ ���� 
	//AA *ap = new AA;
	
	// AA *ap;
	// ap = new AA;
	
	Book *bo = new Book;
	(*bo).a = 15;
	bo -> b = 20;
	
	std::cout << (*bo).a << std::endl;
	std::cout << bo -> b << std::endl;
	
	ap = bo.sum(50, 10);
	
	delete bo; // �����ϱ� 
	
	return 0;
}
