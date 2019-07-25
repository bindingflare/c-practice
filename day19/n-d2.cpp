#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Person {
	private:
		char* name;
		int age;
		bool sex;
		
	public:
		Person(const char myname[], int myage, bool mysex) {
			int len = strlen(myname);
			name = new char[len];
			
			int i;
			for(i = 0; i < len; i++) {
				name[i] = myname[i];
			}
			
			age = myage;
			sex = mysex;
		}
		
		void showPersonInfo() const {
			std::cout << name << ", ";
			std::cout << age << " years old, ";
			std::cout << (sex? "Male":"Female") << std::endl;
		}
		
		// �Ҹ���
		// ���� 1�� �� �����ؾ��Ѵ� 
		~Person() {
			delete name;
			
			std::cout << "������" << std::endl;
		}
};

int main(int argc, char** argv) {
	class Person man("James", 31, 1);
	class Person woman("Mary", 26, 0);
	
	man.showPersonInfo();
	woman.showPersonInfo();
	
	return 0;
}
