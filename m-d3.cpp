#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 배열 개념 

// 동일한 변수의 타입을 여러게 사용 

// 1. 타입 동일
// 2. 연속해서 메모리 할당된다 
// 3. 배열명은 arr[0] 배열의 첫 요소의 주소값  

//int main(int argc, char *argv[]) {
//	int arr[5];
//	
//	for(int i = 0; i < 5; i++) {
//		arr[i] = 10 * i + 10;
//	} 
//	
//	for (int j = 0; j < 5; j++) {
//		printf("%d\n", arr[j]);
//	}
//	
//	return 0;
//}

int main(int argc, char *argv[]) {
	char arr[3];
	
	for(int i = 0; i < sizeof(arr); i++) {
		arr[i] = 97 + i;
	} 
	
	for (int j = 0; j < sizeof(arr); j++) {
		printf("%c\n", arr[j]);
	}
	
	return 0;
}
