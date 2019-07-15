#include <stdio.h>
#include <stdlib.h>

// 포인터 배열: 포인터 변수를 배열로 쓰기 
// 여러게의 문자열을 처리할 때 사용 (2차원 배열 사용)
// 고정 크기일 때 뒤에 채워지지 않은 분분의 메모리 손실  
// 포인터 배열을 이용하면서 선언하고 가변으로 배열 선언하여 사용함 

int main(int argc, char *argv[]) {
//	char mon[3][10] = {"january", "february", "march"};

	char *mon[] = {"january", "february", "march"};
	// char (*pmon)[]; 배열 포인터를 사용할수 없다. 
	
//	int i, j = 0;
//	for(i = 0; i < 3; i++) {
//		for(j = 0; j < 10; j++) {
//			printf("%c", mon[i][j]);
//		}
//		
//		printf("\n");
//	}

	printf("%d\n", &mon[0]);
	printf("%s", mon[0]);
	
	
	
	
	return 0;
}
