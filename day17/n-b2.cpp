#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 함수 오버로딩 

// 값 대신 주소
void swap(int *, int *);
void swap(char *, char *);
void swap(double *, double *);

void swapRef(int &i, int &r) {
	int temp;
	temp = r;
	r = i;
	i = temp;
	
	std::cout << i << " " << r << std::endl;
}

int main(int argc, char** argv) {
	int a = 10, b = 20;
	char c = 'A', d = 'B';
	double e = 10.1f, f = 10.2f;
	
	std::cout << "swap 전"<< std::endl;
	std::cout << a << " " << b << std::endl;
	std::cout << c << " " << d << std::endl;
	std::cout << e << " " << f << std::endl;
	
	swap(&a, &b);
	swap(&c, &d);
	swap(&e, &f);
	
	std:cout << std::endl;
	std::cout << "swap 후"<< std::endl;
	std::cout << a << " " << b << std::endl;
	std::cout << c << " " << d << std::endl;
	std::cout << e << " " << f << std::endl;
	
	std::cout << std::endl;
	std::cout << "swap ref"<< std::endl;
	
	int i = 10;
	int r = 20;
	
	swapRef(i, r);
	
	std::cout << i << " " << r << std::endl;
	
	
	return 0;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}
void swap(double *a, double *b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}
