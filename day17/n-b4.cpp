#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class SCORE {
	private:
		int kor, eng, mat, tot, avg;
	
	public:
		void setKor(int score) {
			kor = score;
		}
		
		void setEng(int score) {
			eng = score;
		}
		
		void setMat(int score) {
			mat = score;
		}
		
		int getTot() {}
		int getAvg() {}
};
int main(int argc, char** argv) {
	SCORE st1;
	SCORE st2;
	
	int kor, eng, mat;
	
	std::cout << "KOREAN: ";
	std::cin >> kor;
	st1.setMat(kor);
	
	std::cout << "ENGLISH: ";
	std::cin >> eng;
	st1.setMat(eng);
	
	std::cout << "MATH: ";
	std::cin >> mat;
	st1.setMat(mat);
	
	std::cout << "TOTAL: " << st1.getTot() << "AVERAGE: " << st1.getAvg() << std::endl;
	
	return 0;
}

