#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BankAccount {
	char acct_no[11];
	char acct_name[10];

	int balance;	
};

int main(int argc, char *argv[]) {
	struct BankAccount accList[3];
	
	char accNos[3][11] = {"1234-56789", "2345-67890", "3456-78901"}; 
	char names[3][10] = {"ȫ�浿", "�̼���", "�ֹμ�"};
	int  balances[3] = {1000, 2000, 3000};
	
	int i = 0;
	for(i = 0; i < 3; i++) {
		strcpy(accList[i].acct_no, accNos[i]);
		strcpy(accList[i].acct_name, names[i]);
		accList[i].balance = balances[i];
	}
	
	for(i = 0; i < 3; i++) {
		printf("���� ��ȣ: %s\n", accList[i].acct_no);
		printf("�̸�: %s\n", accList[i].acct_name);
		printf("�ܾ�: %d\n", accList[i].balance);
		printf("\n"); 
	}
}

