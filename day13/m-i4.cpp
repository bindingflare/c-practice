#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고 무시 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

union Box {
	short candy; // 2 byte
	float snack; // 4 byte
	char doll[8]; // 8 byte "apple" 
}; // 공용체 정의 

//  공용체를 사용하려면 변수 선언
// 용도: 메모리 절약 단, 모든 변수 사용 뷸가능 (1개씩만 사용 가능) 


int main(int argc, char *argv[]) {
	// 공용체를 사용하려면 변수 선언
	union Box box1;
	
	printf("%d\n", sizeof(box1)); // 메모리 크기 출력 
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	strcpy(box1.doll, "apple");
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	box1.candy = 10;
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	box1.snack = 12.2;
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	return 0;
}

