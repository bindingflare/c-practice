#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Pointer ���� 

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
	
	//  ������ ���� ����� �ʱⰪ�� �Ҵ��Ѵ�
	int *intp = &a;
	
	// *intp �� left�� ���� ���� *intp�� �����ʿ� ���� ���� �ǹ��Ѵ�
	char *charp = &b;
	double *doublep = &c;
	
	// �� �����Ϳ� ����� ���� ����Ѵ� 
	printf("a=%p\n", intp);
	printf("b=%p\n", charp);
	printf("c=%p\n", doublep);
	
	// �� �����Ͱ� ����Ű�� ���� ����Ѵ�
	printf("*intp = %d\n", *intp); 
	printf("*charp = %c\n", *charp); 
	printf("*doublep = %d\n", *doublep); 
	
	return 0;
}
