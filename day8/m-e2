#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 배열 sorting 

//int main(int argc, char *argv[]) {
//	double total;
//	double val[5];
//	
//	val[0] = 1.01;
//	val[1] = 2.02;
//	val[2] = 3.03;
//	val[3] = 4.04;
//	val[4] = 5.05;
//	
//	int i;
//	for(i = 0; i < 4; i++) {
//		total += val[i];
//	}
//	
//	printf("Total: %lf", total);
//	
//	return 0;
//}

//int main(int argc, char *argv[]) {
//	char str[30]; // 요소를 생략할 수 있는 것은 초기값읗 줄때만  
//	// 배열에 값을 나중에 넣을 때는 반드시 배열 요소를 써한다	 
//	
//	printf("문자열 입력 :");
//	scanf("%s", str);
//	
//	printf(" 입력된 문자열 : %s\n", str);
//	
//	return 0;
//}

int main(int argc, char *argv[]) {
	int i;
	char ch;
	
	char str[6] = "Hello"; //문자의 끝에는 널문자 \n 
	// 문자열은 실제 문자보다 1자리 더 배열요소로 만든다
	// 왜냐하면 마지막 널문자가 들어가야 하므로  
	char rstr[6];
	
	printf("%s \n", str);
	
	for(i = 0; i < 6; i++) {
		rstr[5 - i] = str[i];
	}
	
	printf("%s \n", rstr);
	return 0;
}
