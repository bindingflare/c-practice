#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ���� ������, keyword �м� 

// this - �ڱ��ڽ� �� Ŭ���� 
// super - �θ� Ŭ����. ���� ��: this.aa �θ�Ŭ������ �ִ� aa ���� 
// static - ������Ʈ������ �ʾƵ� �׳ɻ���� �� �ִ� ���� �Լ� 

// ��ǻ�� ó�� ����

// ���� ���α׷� -> ������ ������ 2���� ����� -> ���� ���α׷� -> ��Ŀ �ܰ� -> �δ� �ܰ� -> ���� ��
// static�� �پ� �ִ� �͵��� ���� �ܰ迡�� �̸� �޸𸮿� �ε� 

// �����ε� �������̵� ����
// �ٽþ��� ���ľ��� �Ʋ�����

class SoSimple {
	private:
		int num1;
		int num2;
		
	public:
		SoSimple(int n1, int n2)
			:num1(n1), num2(n2) {
			std::cout << num1 << " ������ " << num2 << std::endl;
		}
		
		SoSimple(const SoSimple &copy) : num1(copy.num1), num2(copy.num2) {			
			std::cout << num1 << " ��������� " << num2 << std::endl;
		}
		
		void ShowSimpleData() {
			std::cout << num1 << "  " << num2;
		} 
		
}; 

int main(int argc, char** argv) {
	SoSimple sim[10] = {
		SoSimple(15, 30),
		SoSimple(16, 30),
		SoSimple(17, 30),
		SoSimple(18, 30),
		SoSimple(19, 30),
		SoSimple(20, 30),
		SoSimple(21, 30),
		SoSimple(22, 30),
		SoSimple(23, 30),
		SoSimple(24, 30),
	};
	
	SoSimple sim3 = new SoSimple[10] // ���� ������Ʈ 
	delete [] sim2; // ���� ������Ʈ ����
	
	SoSimple sim1(25, 30);
	std::cout << "��������ڻ���� " << std::endl;
		
	SoSimple sim2 = sim1; // ���� ������ �Լ� ȣ�� 
	
	std::cout << "��������ڻ���� " << std::endl;
	
	return 0;
}
