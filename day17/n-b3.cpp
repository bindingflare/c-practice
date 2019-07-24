#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Complex {
	public: // 접근 제어자
		double m_x;
		double m_i;
	
		inline double real() { return m_x; }
		inline double imag() { return m_i; }
		
		inline int max(int x, int y) { return (x > y)? x:y ; }
};

int main(int argc, char** argv) {
	Complex z;
	z.m_x = 3;
	z.m_i = 4;
	
	std::cout << z.real() << " + " << z.imag() << "i" << std::endl;
	
	std::cout << std::endl;
	std::cout << max(100, 30) << std::endl;	
	
	int a = 123, b = 456;

	int &r = a;
	std::cout << a << " " << r << std::endl;		
	
	r = b;
	std::cout << a << " " << r << std::endl;		
	
	return 0;
}

