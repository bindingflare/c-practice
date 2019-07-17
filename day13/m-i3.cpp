#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고 무시 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct bankAccount {
	char acct_no[17];
	char acct_name[20];

	int balance;	
} account; // 이렇게도 성언 가능 

int main(int argc, char *argv[]) {
	// 구조체 변수 선언
//	struct bankAccount account;
	
	strcpy(account.acct_no, "1243-32541-23412");
	strcpy(account.acct_name, "홍길동");
	account.balance = 10000;
	
	printf("계정 번호: %s\n", account.acct_no);
	printf("이름: %s\n", account.acct_name);
	printf("잔액: %d\n", account.balance);
	
	printf("\n"); 
	
	strcpy(account.acct_no, "2325-21355-21568");
	strcpy(account.acct_name, "이순신");
	account.balance = 50000;
	
	printf("계정 번호: %s\n", account.acct_no);
	printf("이름: %s\n", account.acct_name);
	printf("잔액: %d\n", account.balance);
	
	
	return 0;
}

