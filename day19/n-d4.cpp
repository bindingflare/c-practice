#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Person {
	private:
		char name[20];
		int age;
		
	public:
		Person(const char name[], int age): age(age) {
			for(int i = 0; i < 20; i++) {
				this -> name[i] = name[i];
			}
		}
		
		void Name() const {
			cout << "My name is " << name << endl;
		}
		
		void Age() const {
		cout << "I am " << age << " years old" << endl;
		}
}; 

class UniStudent: public Person {
	private:
		char major[50];
		
	public:
			UniStudent(const char name[], int age, const char major[]): Person(name, age) {
				for(int i = 0; i < 50; i++) {
					this -> major[i] = major[i];
				}
			}
			
			void Major() {
				cout << "My major is " << major << endl;
			}
			
			void AboutMe() {
				Name();
				Age();
				Major();
			}
};

int main(int argc, char** argv) {
	UniStudent student("Park Jo Won", 22, "Computer Science");
	
	student.AboutMe();
	
	UniStudent student2("Hong Gil Dong", 22, "Environmental Sciences");
	student2.Name();	
	
	Person person("Jung Hyun Lee", 34);
	person.Age();
//	person.AboutMe(); 

	return 0;
}
