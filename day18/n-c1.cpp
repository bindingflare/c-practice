#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Score {
	private:
		int kor, eng;
		
	public:
		void SetK(int kor1) { kor = kor1; }
		void SetE(int eng1) { eng = eng1; }
		
		void DispK() { std::cout << kor << std::endl; }
		void DispE() { std::cout << eng << std::endl; }
		
		void SetKE(int kor1, int eng1) {
			kor = kor1;
			eng = eng1;
		}
		
		void DispKE() {
			std::cout << kor << std::endl;
			std::cout << eng << std::endl;
		}
		
		void Pandan() {
			if (kor >= 60 && eng >= 60) {
				std::cout << "합격" << std::endl;
			} else {
				std::cout << "불합격" << std::endl;
			}
		}
};

int main(int argc, char** argv) {
	class Score sc;
	
	sc.SetK(40);
	sc.SetE(35);
	
	sc.DispK();
	sc.DispE();
	
	sc.Pandan();
	
	sc.SetKE(80, 81);
	sc.DispKE();
	
	sc.Pandan(); 
	
	return 0;
}
