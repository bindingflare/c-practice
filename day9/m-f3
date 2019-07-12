#include <stdio.h>
#include <stdlib.h>

// 배열 - 2 차원 배열 - 다차원

// 1차원 배열은 int a[] => int *pa, pa = a
// 2차원 배열은 int a2[][] 

int main(int argc, char *argv[]) {
	int i, j;
	int arr[2][4] = {10, 15, 20, 0, 30, 25 , 40, 0};
	
	int (*parr)[4] = arr; // [0,0] 주소가 paa넣어 진다 
	// aa[0][0]주소, aa, paa
	// int (포인터변수)[열에대한 요소] 
	int sum = 0;
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 4; j++){
			sum += arr[i][j];
		}
		
		arr[i][3] = sum;
		sum = 0;
	}
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 4; j++){
			printf("%3d", arr[i][j]);
		}
		
		printf("\n");
	}
	
	printf("%d %d %d\n", &arr[0][0], arr, parr[0]);
	printf("%d %d %d\n", &arr[1][0], arr + 1, parr[1]);
	printf("%d %d %d\n", &arr[2][0], arr + 2, parr[2]);
	
	printf("\n");
	printf("%d %d %d\n", &arr[0][0], arr, parr[0]);
	printf("%d %d %d\n", &arr[0][1], *arr + 1, parr[0] + 1);
	printf("%d %d %d\n", &arr[0][2], *arr + 2, parr[0] + 2);
	
	
	//&arr[0][1], *arr + 1);
	//printf("%d %d %d \n", &arr[2][0], *(arr + 2), *(parr));
	
	//printf("%d %d %d %d\n", &&arr[0][0], arr, &arr[0][0], parr);
	//printf("%d %d\n", &arr[1][0], parr + 1);
	
//	int val = 100;
//	
//	int i, j;
//	for(i = 0; i < 4; i++) {
//		for(j = 0; j < 2; j++) {
//			arr[i][j] = val;
//			val = val - 10; // val -= 10;도 됨 
//		}
//	}
//	
//	for(i = 0; i < 4; i++) {
//		for(j = 0; j < 2; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		
//		printf("\n");
//	}

	return 0;
}
