#include <stdio.h>
#include <stdlib.h>

// 배열 - 2 차원 배열 - 다차원

// 1차원 배열은 int a[] => int *pa, pa = a
// 2차원 배열은 int a2[][] 

int main(int argc, char *argv[]) {
//	int arr[3][4];
//	
//	int count = 0;
//	
//	int i, j;
//	for(i = 0; i < 3; i++) {
//		for(j = 0; j < 4; j++) {
//			arr[i][j] = count;
//			count++;
//		}
//	}
//	
//	for(i = 0; i < 3; i++) {
//		for(j = 0; j < 4; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		
//		printf("\n");
//	}

	int arr[4][2]; // = {{100, 90}, {80, 70}, {60, 50}, {40, 30}};
	// = {100, 90, 80, 70, 60, 50, 40, 30}; 이미 [2][4]로 정해질때 {} 안에 {} 필요없음. c, 자바 행우선 순위
	// 열우선 순위 -> 0열부터 모두 채우기 (해당 함수 사용) 
	
	int val = 100;
	
	int i, j;
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 2; j++) {
			arr[i][j] = val;
			val = val - 10; // val -= 10;도 됨 
		}
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 2; j++) {
			printf("%3d ", arr[i][j]);
		}
		
		printf("\n");
	}

	return 0;
}
