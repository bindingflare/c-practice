#include <iostream>
//#include <iomanip.h> 
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a = 1; // 전역 변수 

class Date { // 클래스 
	int month; // 멤버 변수
	int day;
	
	static int year; // 클래스 멤버 변수 
	
	public :
		// 생성자 : 함수, 함수 
		Date(int m = 0, int d = 0):month(m), day(d) {}
		
	static void Title() {
		cout << "년" << "\t" << "월" << "\t" << "일" << endl; 
	}
	
	void Disp();	
};

int Date::year = 1919;

void Date::Disp() {
	cout << year << "\t" << month << "\t" << day << endl;
}

int main(int argc, char** argv) {
//	int a = 5;// 지역 변수
//	{
//		int a = 10; // 이 블록속에만 쓰는 변수 (블록 변수) 
//		a += ::a; // a = 10 + 1 = 11
//		::a += a; // a = 1 + 11 = 12
//		
//		cout << ::a << "\t" << a << endl; 
//	 } 
//	
//	cout << ::a << "\t" << a << endl; // 이 a는 지역 변수 a 

	Date Kor(3, 1);
	
	Date::Title();
	Kor.Disp();
	
	return 0;
}
