#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class SimpleClass {
	private:
		int num1;
		int num2;
	
	public:
		SimpleClass() {
			num1 = 0;
			num2 = 0;
		}
		
		SimpleClass(int n) {
			num1 = n;
			num2 = n;
		}
		
		SimpleClass(int n1, int n2) {
			num1 = n1;
			num2 = n2;
		}
		
		void show() const {
			std::cout << num1 << "  " << num2 << std::endl;
		}
};

int main(int argc, char** argv) {
	class SimpleClass sclass(10,30);
	
	sclass.show();
	
	class SimpleClass sclass2(300);
	
	sclass2.show();
	
	return 0;
}
