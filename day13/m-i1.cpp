#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tri(int*, int*, int*);

int main(int argc, char *argv[]) {
	int base, height, area = 0;
	
	printf("삼각형 밑변과 높이를 입력");
	scanf("%d%d", &base, &height);
	
	int *pbase = &base;
	int *pheight = &height;
	int *parea = &area;;
	
	tri(pbase, pheight, parea); 
	
	printf("삼각형 넓이: %d", area);
	return 0;
}

//int tri(int base, int height) {
//	return base * height / 2;
//}

void tri(int *base, int *height, int *area) {
	*area = (*base) * (*height) / 2;
}
