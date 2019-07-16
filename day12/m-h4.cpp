#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *pa, int *pb); // 함수 선언 

int globalNum = 69; // 전역으로 사용할 수 있는 변수 

int main(int argc, char *argv[]) {
	// tmp 변수 여기서 사용할수없음. swap()의 지역 변수임
	// 전역 변수는 이 파일 아무데나 사용가능  
	
	// static keyword : 정적변수 static으로 선언된 고정형
	// 자동 변수 = 지역 변수
	// 외부 변수 extern int a =  
	static int c = 0; 
	
	
	printf("%d\n\n", globalNum);
	
	int a = 5, b = 10;
	
	printf("before: a = %d b = %d\n", a, b);
	
	swap(&a, &b); 
	printf("after: a = %d b = %d", a, b);
	
	return 0;
}

void swap (int *pa, int *pb) { // 함수 정의
	printf("\n%d %d\n\n", globalNum, c);

	int tmp;
	
	tmp = *pa;
	*pa = *pb;
	*pb = tmp; 
}
