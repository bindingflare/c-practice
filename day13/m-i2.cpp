#include <stdio.h>
#include <stdlib.h>

// ���� ó����
// #include �ٸ� c��� �Լ��� �̿��ϰ��� �ҋ�  
// #define ��ũ�� �Լ� ������ �Լ��� ����, ���ó���� �̿�

// ����ü : ���α׷� �ۼ��� �Ѱ��� ���ڵ� �پ��� �������� �ʿ��� �� �̸� �����ִ� �� 
// ��, ���� �Ӽ� �� ���� �� �ִ� 
// ü���� ���� �Ӽ� (����, �迭) ����(�Լ� ���� �κ�)

// ����_ 
// ���� < �迭 (���� ������ ���� ���� < ����ü (�Ӽ� : ���� �迭) < Ŭ���� (�Ӽ� + ����)

#define P(a, b) a+b // ��ũ�� ��� ó�� 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ����ü ���� 
struct Person {
	char name[20];
	
	int age;
	double height;
	double weight;
}; 

// ����ü ���
struct personalData; 

int main(int argc, char *argv[]) {
	int a = 3, b = 5;
	
	printf("%d", P(a, b));
	
	return 0;
}

