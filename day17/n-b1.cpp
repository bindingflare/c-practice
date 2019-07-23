#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 함수 오버로딩 

int sum(int, int);
int sum(int, int, int);
float sum(float, float, float);
float sum(float, int, float);

int main(int argc, char** argv) {
	std::cout << sum(10, 20) << std::endl;
	std::cout << sum(10, 20, 30) << std::endl;
	std::cout << sum(10.1f, 20.2f, 30.3f) << std::endl;
	std::cout << sum(10.1f, 20, 30.3f) << std::endl;
	
	return 0;
}

int sum(int a, int b) {
	return a + b;
}

int sum(int a, int b, int c) {
	return a + b + c;
}

float sum(float a, float b, float c) {
	return a + b + c;
}
float sum(float a, int b, float c) {
	return a + b + c;
}
