#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Pointer recap

int main(int argc, char *argv[]) {
	int b = 20;
	printf("%d at %p\n", b, &b);
	
	int* pb = &b;
	printf("%d at %p\n", *pb, pb);
	
	// pb의 주소 출력
	printf("location of pb: %p\n", &pb);
	
	int** ppb; // 포인터의 포인터의 변수
	ppb = &pb;
	
	printf("%p at %p\n", &pb, &ppb); 
	
	// pb 값 출력
	printf("value: %p\n", *ppb); 
	
	// pb 값의 가리키고있는 실제 값을 출력
	printf("value: %d", **ppb);
	
	return 0;
}
