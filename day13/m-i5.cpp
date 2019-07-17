#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고 무시 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 메모리 할당

// malloc()
// calloc()

// reallloc()
// free() 

int main(int argc, char *argv[]) {
	int size = 5, *ar; 

	ar = (int *) malloc(size * sizeof(int));
	
	int i;
	for(i = 0; i < size; ++i) {
		ar[i] = i;
	}
	for(i = 0; i < size; ++i) {
		printf("%d ", ar[i]);
	}
	
	printf("\n");
	
	size = 10;
	
	ar = (int *) realloc(ar, size * sizeof(int));
	
	for(i = 0; i < size; ++i) {
		ar[i] = i;
	}
	for(i = 0; i < size; ++i) {
		printf("%d ", ar[i]);
	}
	
	printf("\n");
	
	free(ar); // 메모리 번지 로 지웁니다 
	
	for(i = 0; i < size; ++i) {
		ar[i] = i;
	}
	for(i = 0; i < size; ++i) {
		printf("%d ", ar[i]);
	}
	
	return 0;
}

