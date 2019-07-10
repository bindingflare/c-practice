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

// 배열값 받기 (scanf_s)

//int main(int argc, char *argv[]) {
//	int arr[5];
//	
//	for(int i = 0; i < 5; i++) {
//		printf("숫자를 놓어주세요\n");
//		scanf_s("%d", &arr[i]);
////		scanf("%d", &temp);
//	}
//	
//	for (int j = 0; j < 5; j++) {
//		printf("%d\n", arr[j]);
//	}
//	
//	return 0;
//}

// 배열 선언과 초기화 하기

// 배열의 요소와 초기값이 갯수가 같다면 초기값이 차례로 체워진다
// " " " 보다 갯수가 적다면 차례로 왼쪽 부터 채우고 남은부분 0으로 체워진다 (엉뚱한 수 들어갈수도있음) 
// " " " 보다 갯수가 많다면 차례로 왼쪽 부터 채우고 뒷부분이 손실 된다
// 배열의 요소를 생략하면 초기기값의 갯수만큼 요소가 잡힌다. 

//int main(int argc, char *argv[]) {
//	int arr[5] = {1000,2000,3000,4000,5000};
//	// int arr[] = {1000,2000,3000,4000,5000}; 도 가능 및 추천 (사이즈 읜쪽으로 고정 안함) 
//	
//	char carr[4] = {'a', 'b', 'c'}; // 4번째는 "" 로 출력됨 
//	char carr2[] = "abcd"; // 문자형 초기화 대신 문자열 초기화 
//	double darr[] = {1.1, 1.2, 1.3, 1.4, 1.5}; // 실수형 변수 선언 
//		
//	for (int j = 0; j < 5; j++) {
//		printf("%d\n", arr[j]);
//	}
//	
//	for (int k = 0; k < 4; k++) {
//		printf("%c\n", carr[k]);
//	}
//	
//	for (int l = 0; l < 4; l++) {
//		printf("%c\n", carr2[l]);
//	}
//	
//	for (int m = 0; m < 5; m++) {
//		printf("%lf\n", darr[m]);
//	}
//	
//	return 0;
//}

int main(int argc, char *argv[]) {
	int a[7] = {1,2,3,4,5};
	int b[8] = {10,11,12,13,14,15};
	int c[7];
	
	int i = 0;
	
	int suma = 0;
	int sumb = 0;
	
	for(i = 0; i < 6; i++) {
		c[i] = a[i] + b[i];
		
		suma += a[i];
		sumb += b[i];
	}
	
	a[5] = suma;
	b[6] = sumb;
	
	a[6] = suma / 5;
	b[7] = sumb / 5;
	
	for(i = 0; i < 5; i++) {
		printf("%d + %d = %d\n", a[i], b[i], c[i]);
	}
	
	printf("suma = %d\n", a[5]);
	printf("sumb = %d\n", b[6]);
	printf("avga = %d\n", a[6]);
	printf("avga = %d\n", b[7]);
}
