#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS // strcpy ���� ��� ���� 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct bankAccount {
	char acct_no[17];
	char acct_name[20];

	int balance;	
} account; // �̷��Ե� ���� ���� 

int main(int argc, char *argv[]) {
	// ����ü ���� ����
//	struct bankAccount account;
	
	strcpy(account.acct_no, "1243-32541-23412");
	strcpy(account.acct_name, "ȫ�浿");
	account.balance = 10000;
	
	printf("���� ��ȣ: %s\n", account.acct_no);
	printf("�̸�: %s\n", account.acct_name);
	printf("�ܾ�: %d\n", account.balance);
	
	printf("\n"); 
	
	strcpy(account.acct_no, "2325-21355-21568");
	strcpy(account.acct_name, "�̼���");
	account.balance = 50000;
	
	printf("���� ��ȣ: %s\n", account.acct_no);
	printf("�̸�: %s\n", account.acct_name);
	printf("�ܾ�: %d\n", account.balance);
	
	
	return 0;
}

