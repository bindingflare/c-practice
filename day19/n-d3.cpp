#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 복사 생성자, keyword 분석 

// this - 자기자신 의 클래스 
// super - 부모 클래스. 쓰기 예: this.aa 부모클래스에 있는 aa 변수 
// static - 오브젝트만들지 않아도 그냥사용할 수 있는 변수 함수 

// 컴퓨터 처리 순서

// 원시 프로그램 -> 컴파일 번역기 2진수 만들기 -> 목적 프로그렘 -> 링커 단계 -> 로더 단계 -> 실행 됨
// static로 붙어 있는 것들을 빌더 단계에서 미리 메모리에 로드 

// 오버로딩 오버라이딩 재사용
// 다시쓰기 고쳐쓰기 아껴쓰기

class SoSimple {
	private:
		int num1;
		int num2;
		
	public:
		SoSimple(int n1, int n2)
			:num1(n1), num2(n2) {
			std::cout << num1 << " 생성자 " << num2 << std::endl;
		}
		
		SoSimple(const SoSimple &copy) : num1(copy.num1), num2(copy.num2) {			
			std::cout << num1 << " 복사생성자 " << num2 << std::endl;
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
	
	SoSimple sim3 = new SoSimple[10] // 동적 오브젝트 
	delete [] sim2; // 동적 오브젝트 제거
	
	SoSimple sim1(25, 30);
	std::cout << "복사생성자사용전 " << std::endl;
		
	SoSimple sim2 = sim1; // 복사 생성자 함수 호출 
	
	std::cout << "복사생성자사용후 " << std::endl;
	
	return 0;
}
