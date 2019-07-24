#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Rectangle {
	private:
		int length, width;
		
	public:
		void setLength(int size) {
			length = size;
		}
		
		void setWidth(int size) {
			width = size;
		}
		
		int getLength() {
			return length;
		}
		
		int getWidth() {
			return width;
		}
		
		int getArea() {
			return length * width;
		}
		
		void setAll(int, int);
		void dispArea();
};

void Rectangle::setAll(int length, int width) {
	setLength(length);
	setWidth(width);
}

void Rectangle::dispArea() {
	std::cout << "Length: " << getLength() << std::endl;
	std::cout << "Width: " << getWidth() << std::endl;
	std::cout << std::endl;
	std::cout << "Area: " << getArea() << std::endl;
}

int main(int argc, char** argv) {
	class Rectangle shape;
	
	int length, width;
	
	std::cout << "Input length" << std::endl;
	std::cin >> length;
//	shape.setLength(length); 
	
	std::cout << "Input width" << std::endl;
	std::cin >> width;
//	shape.setWidth(width);

	shape.setAll(length, width);
	
	std::cout << std::endl; 
	shape.dispArea();
//	std::cout << "Shape Area: " << shape.getArea() << std::endl;
	
	return 0;
}
