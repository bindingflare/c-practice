#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Pointer 쓰기 

//int main(int argc, char *argv[]) {
//	float f = 3.14;
//	float* pf = &f;
//	float** ppf = &pf;
//	float*** pppf = &ppf;
//	
//	printf("%lf\n", f);
//	printf("%lf\n", *pf);
//	printf("%lf\n", **ppf);
//	printf("%lf\n", ***pppf);
//	
//	printf("");
//	
//	return 0;
//}

int main(int argc, char *argv[]) {
	int a = 20;
	char b = 'S';
	double c = 2.1;
	
	//  포인터 변수 선언과 초기값을 할다한다
	int *intp = &a;
	
	// *intp 는 left에 오면 공간 *intp가 오른쪽에 오면 값을 의미한다
	char *charp = &b;
	double *doublep = &c;
	
	// 각 포인터에 저장된 값을 출력한다 
	printf("a=%p\n", intp);
	printf("b=%p\n", charp);
	printf("c=%p\n", doublep);
	
	// 각 포인터가 가리키는 값을 출력한다
	printf("*intp = %d\n", *intp); 
	printf("*charp = %c\n", *charp); 
	printf("*doublep = %d\n", *doublep); 
	
	return 0;
}
