#include <stdio.h>
#include <stdlib.h>

// 배열 - 2 차원 배열 - 다차원

int main(int argc, char *argv[]) {
	int arr[3][2] = {1, 2, 3, 4, 5, 6};
	int (*parr)[2];
	
	parr = arr;
	printf("%d %d \n", &arr[0][0], parr);
	
	// 주소 값 출력 
	printf("%d %d %d %d %d\n", &arr[0][0], arr, arr[0], parr, parr[0]);
	printf("%d %d %d %d %d\n", &arr[1][0], arr + 1, arr[1], parr + 1, parr[1]);
	printf("%d %d %d %d %d\n", &arr[2][0], arr + 2, arr[2], parr + 2, parr[2]);
	
	printf("\n");
	
	printf("%d %d %d %d %d\n", &arr[0][1], *arr + 1, arr[0] + 1, *parr + 1, parr[0] + 1);
	printf("%d %d %d %d %d\n", &arr[1][1], *(arr + 1) + 1, arr[1] + 1, *(parr + 1) + 1, parr[1] + 1);
	printf("%d %d %d %d %d\n", &arr[2][1], *(arr + 2) + 1, arr[2] + 1, *(parr + 2) + 1, parr[2] + 1);
	
	printf("\n");
	
	// 실제 값 출력
	printf("%d %d %d %d %d\n", arr[0][0], **(arr), *(arr[0]), **(parr), *(parr[0]));
	printf("%d %d %d %d %d\n", arr[1][0], **(arr + 1), *(arr[1]), *(*parr + 1), *(parr[1]));
	printf("%d %d %d %d %d\n", arr[2][0], **(arr + 2), *(arr[2]), **(parr + 2), *(parr[2]));
	// *(arr + 1), *(parr + 1)는 해당 번지 행의 시작주소 
	
	printf("\n");	
	
	printf("%d %d %d %d %d\n", arr[0][1], *(*arr + 1), *(arr[0] + 1), *(parr[0] + 1), *(parr[0] + 1));
	printf("%d %d %d %d %d\n", arr[1][1], *(*(arr + 1) + 1), *(arr[1] + 1), *(parr[1] + 1), *(parr[1] + 1));
	printf("%d %d %d %d %d\n", arr[2][1], *(*(arr + 2) + 1), *(arr[2] + 1), *(parr[2] + 1), *(parr[2] + 1));

	return 0;
}
