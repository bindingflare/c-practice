#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Pointer recap

int main(int argc, char *argv[]) {
	int b = 20;
	printf("%d at %p\n", b, &b);
	
	int* pb = &b;
	printf("%d at %p\n", *pb, pb);
	
	// pb�� �ּ� ���
	printf("location of pb: %p\n", &pb);
	
	int** ppb; // �������� �������� ����
	ppb = &pb;
	
	printf("%p at %p\n", &pb, &ppb); 
	
	// pb �� ���
	printf("value: %p\n", *ppb); 
	
	// pb ���� ����Ű���ִ� ���� ���� ���
	printf("value: %d", **ppb);
	
	return 0;
}
