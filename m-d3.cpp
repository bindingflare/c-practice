#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// �迭 ���� 

// ������ ������ Ÿ���� ������ ��� 

// 1. Ÿ�� ����
// 2. �����ؼ� �޸� �Ҵ�ȴ� 
// 3. �迭���� arr[0] �迭�� ù ����� �ּҰ�  

//int main(int argc, char *argv[]) {
//	int arr[5];
//	
//	for(int i = 0; i < 5; i++) {
//		arr[i] = 10 * i + 10;
//	} 
//	
//	for (int j = 0; j < 5; j++) {
//		printf("%d\n", arr[j]);
//	}
//	
//	return 0;
//}

int main(int argc, char *argv[]) {
	char arr[3];
	
	for(int i = 0; i < sizeof(arr); i++) {
		arr[i] = 97 + i;
	} 
	
	for (int j = 0; j < sizeof(arr); j++) {
		printf("%c\n", arr[j]);
	}
	
	return 0;
}
