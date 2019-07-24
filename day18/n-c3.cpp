#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class ReportCard {
	private:
		char name[11];
		int kor, eng;
		char grade;
		
		int getTot() {
			return kor + eng;
		}
		
		double getAvg() {
			return getTot() / 2;
		}
		
	public:
		char* getName() {
			return name;
		}
		
		int getKor() {
			return kor;
		}
		
		int getEng() {
			return eng;
		}
		
		void setKor(int score) {
			kor = score;
		}
		
		void setEng(int score) {
			eng = score;
		}
		
		void setName(char *name1) {
			int i;
			for(i = 0; i < sizeof(name); i++) {
				name[i] = name1[i];
			}
		}

		void setScores(int, int);
		char calcGrade(int);
		void output();

};

void ReportCard::setScores(int kor, int eng) {
	setKor(kor);
	setEng(eng);	
}

char ReportCard::calcGrade(int score) {
	if (score > 90) {
		return 'A';
	} else if (score > 80) {
		return 'B';
	} else if (score > 70) {
		return 'C';
	} else if (score > 60) {
		return 'D';
	} else if (score > 50) {
		return 'E';
	} else {
		return 'F';
	}
}

void ReportCard::output() {
	std::cout << "<< Report card >>" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Name: " << getName() << std::endl;
	std::cout << std::endl;
	
	int kor = getKor();
	std::cout << "Korean: " << kor << " " << calcGrade(kor) << std::endl;
	
	int eng = getEng();
	std::cout << "English: " << eng << " " << calcGrade(eng) << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "Total: " << getTot() << std::endl;
	std::cout << "Average: " << getAvg() << std::endl;
}

int main(int argc, char** argv) {
	class ReportCard studReport;
	
	studReport.setName("Adam Cho");
	studReport.setKor(89);
	studReport.setEng(78);
	
	studReport.output();
	
	return 0;
}
