#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS // strcpy ���� ��� ���� 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// �޸� �Ҵ�

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
	
	free(ar); // �޸� ���� �� ����ϴ� 
	
	for(i = 0; i < size; ++i) {
		ar[i] = i;
	}
	for(i = 0; i < size; ++i) {
		printf("%d ", ar[i]);
	}
	
	return 0;
}

