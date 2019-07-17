#include <stdio.h>
#include <stdlib.h>

// 선행 처리기
// #include 다른 c언어 함수를 이용하고자 할떄  
// #define 매크로 함수 간단한 함수를 정의, 상수처리시 이용

// 구조체 : 프로그램 작성시 한개의 레코드 다양한 지료형이 필요할 때 이를 묶어주는 것 
// 열, 변수 속성 만 묶을 수 있다 
// 체지향 언어에서 속성 (변수, 배열) 동작(함수 선언 부분)

// 정리_ 
// 변수 < 배열 (같은 종류의 변수 묶음 < 구조체 (속성 : 변수 배열) < 클래스 (속성 + 동작)

#define P(a, b) a+b // 메크로 상수 처리 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 구조체 정의 
struct Person {
	char name[20];
	
	int age;
	double height;
	double weight;
}; 

// 구조체 사용
struct personalData; 

int main(int argc, char *argv[]) {
	int a = 3, b = 5;
	
	printf("%d", P(a, b));
	
	return 0;
}

