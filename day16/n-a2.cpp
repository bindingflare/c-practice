#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Gu {
	int month;
	int day;
};

int main(int argc, char** argv) {
	Gu M = {5, 12}; // 선언 
	Gu *ap = new Gu;
	
	*ap = M;
	
	cout << ap -> month << "\t" << ap -> day << endl;
	
	delete ap; // 메모리 해제 
	
	return 0;
}
