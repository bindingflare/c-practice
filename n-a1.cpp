#include <iostream>
//#include <iomanip.h> 
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a = 1; // ���� ���� 

class Date { // Ŭ���� 
	int month; // ��� ����
	int day;
	
	static int year; // Ŭ���� ��� ���� 
	
	public :
		// ������ : �Լ�, �Լ� 
		Date(int m = 0, int d = 0):month(m), day(d) {}
		
	static void Title() {
		cout << "��" << "\t" << "��" << "\t" << "��" << endl; 
	}
	
	void Disp();	
};

int Date::year = 1919;

void Date::Disp() {
	cout << year << "\t" << month << "\t" << day << endl;
}

int main(int argc, char** argv) {
//	int a = 5;// ���� ����
//	{
//		int a = 10; // �� ��ϼӿ��� ���� ���� (��� ����) 
//		a += ::a; // a = 10 + 1 = 11
//		::a += a; // a = 1 + 11 = 12
//		
//		cout << ::a << "\t" << a << endl; 
//	 } 
//	
//	cout << ::a << "\t" << a << endl; // �� a�� ���� ���� a 

	Date Kor(3, 1);
	
	Date::Title();
	Kor.Disp();
	
	return 0;
}
