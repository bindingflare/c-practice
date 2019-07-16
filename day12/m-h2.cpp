#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 함수 = 메소드 (객체) : 입력 동작 처리 결과
// 1. 함수 선언 : 사용자 함수 명시
// 2. 함수 작성 { }
// 3. 함수 호출 : 함수 사용하려면 반드시 호출 해 주셔야 한다

int sum(int begin, int end, int step) { // { } 처리할 내용을 기재 한다. 실행문 작성
	int i, sum = 0;
	
	for(i = begin; i <= end; i += step) {
		sum += i;
	}
	
	return sum;
} 

int main(int argc, char *argv[]) {
	int a = 20, b = 50, c = 3;
	
	int total = sum(a, b, c); // 함수 호출
	
	printf("%d ", total);
	
	return 0;
}
