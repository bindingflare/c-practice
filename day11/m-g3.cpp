#include <stdio.h>
#include <stdlib.h>

// 포인터 배열: 포인터 변수를 배열로 쓰기 
// 여러게의 문자열을 처리할 때 사용 (2차원 배열 사용)
// 고정 크기일 때 뒤에 채워지지 않은 분분의 메모리 손실  
// 포인터 배열을 이용하면서 선언하고 가변으로 배열 선언하여 사용함 

// http://www.slideshare.net/ssuserff7918/ss-31124613

int main(int argc, char *argv[]) {
//	char mon[3][10] = {"january", "february", "march"};

//	char mon[5][15];
//	
//	int i;
//	for(i = 0; i < 5; i++) {
//		scanf("%s", mon[i]); 
//	}
//	
//	printf("\n");
//	
//	for(i = 0; i < 5; i++) {
//		printf("%s\n", mon[i]); 
//	}

//	char *cp = "tiger";
//	printf("%s\n", cp);
//	
//	char *cpa[5] = {"tiger", "elephant", "horse", "lion", "dog"};
//	printf("%s\n", cpa[0]);
//	printf("%s\n", cpa[1]);
//	printf("%s\n", cpa[2]);
//	printf("%s\n", cpa[3]);
//	printf("%s\n", cpa[4]);
	
//	char mon[3][10] = {"january", "february", "march"};

//	char *mon[5];
//	char temp;
//	
//	int i;
//	for(i = 0; i < 5; i++) {
//		scanf("%s", mon[i]); 
//	}
//	
//	printf("\n");
//	
//	for(i = 0; i < 5; i++) {
//		printf("%s\n", mon[i]); 
//	}

	int arr1[4] = {11, 12, 13, 14};
	int arr2[4] = {21, 22, 23, 24};
	int arr3[4] = {31, 32, 33, 34};
	int arr4[4] = {41, 42, 43, 44};
	
	int *arr[4] = {arr1, arr2, arr3, arr4};
	
	printf("%d\n", arr[1][1]);
	printf("%d\n", *(*(arr + 1) + 3));
	printf("%d\n", *(*arr + 1));
	
	return 0;
}
