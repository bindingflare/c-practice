#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS // strcpy ���� ��� ���� 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

union Box {
	short candy; // 2 byte
	float snack; // 4 byte
	char doll[8]; // 8 byte "apple" 
}; // ����ü ���� 

//  ����ü�� ����Ϸ��� ���� ����
// �뵵: �޸� ���� ��, ��� ���� ��� �氡�� (1������ ��� ����) 


int main(int argc, char *argv[]) {
	// ����ü�� ����Ϸ��� ���� ����
	union Box box1;
	
	printf("%d\n", sizeof(box1)); // �޸� ũ�� ��� 
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	strcpy(box1.doll, "apple");
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	box1.candy = 10;
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	box1.snack = 12.2;
	
	printf("%d %f %s\n", box1.candy, box1.snack, box1.doll);
	
	return 0;
}

