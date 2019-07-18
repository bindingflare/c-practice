#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>

#define _FILE_ "addrbook.dat"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ������Ʈ 2 - Address Book 

struct data {
	char cName[10];
	char cTel[16];
	char cAddr [32];
};

int Cnt_data(int);

void SelOne(int, struct data*); 
void SelTwo(int, struct data*); 
void SelThree(int, struct data*); 
void SelFour(int, struct data*); 
void SelFive(int, struct data*); 

int main(int argc, char *argv[]) {
	char cBtn; // �޴��� �Է� ���� ���� 
	int rsize = sizeof(struct data); // 58 byte
	
	struct data *Book1; // ����ü ������ ���� ���� 
	struct data *Book2;
	
	printf("%d", rsize);
	
	while(1) {
		int Lec = Cnt_data(rsize); // ���� ����, �ο��� 
		Book1 = (struct data*)(malloc(1 * sizeof(struct data))); // 58
		Book2 - (struct data*)(malloc(Lec * sizeof(struct data))); 
		
		system("cls"); // ��� ����Ʈ clear screen
		
		printf("����ü ũ�� : %d\n", rsize);
		printf("������ ���� : %d\n", Lec);
		
		if(Lec != 0) { // 1���̶� �ּҷ� ���ᰡ ������ 
			printf("1. �ڷ��Է�\n");
			printf("2. �ڷ�˻�\n");
			printf("3. �ڷ����\n");
			printf("4. �ڷ����\n");
			printf("5. �ڷ���ȸ\n");
			printf("0. ����\n");
			printf("�����ϼ��� : ");
			scanf("%c", &cBtn); 
		} else {
			cBtn = '1';
		}
		
		if(cBtn == '1') {
			// �Է�
			system("cls");
			
			SelOne(rsize, Book1); // �Է��Լ� ȣ�� 
		} else if(cBtn == '2') {
			// �˻�
		} else if(cBtn == '3') {
			// ���� 
		} else if(cBtn == '4') {
			// ���� 
		} else if(cBtn == '5') {
			// ��ȸ 
		} else if(cBtn == '0') {
			// ���� 
		} else {
			printf("�ٽ��Է�\n");
			continue; // �ݺ��� ������ 
		}
	}
	
	return 0;
}

// �ο� �� ��� 
void SelOne(int rsize, struct data *Book1) {
	//  �Է¹޾� ����ü�� �ֱ� 
	// ���� ���� �������� ���� ���� �ݱ� 
	FILE *fsave;
	
	//���Ͽ��� �Է� �޾� ���Ͽ� ���� ������ ���
	fflush(stdin); // ����½� ���Ǵ� ������ �ڷḦ �����
	
	printf("\n�̸� [8�� �̳�] : ");
	gets(Book1 -> cName); 
	 
	printf("\n��ȭ��ȣ [16�� �̳�] : ");
	gets(Book1 -> cTel); 
	
	printf("\n �ּ� [24�� �̳�]");
	gets(Book1 -> cAddr);
	
	if(strlen(Book1 -> cName) < 1 || strlen(Book1 -> cTel) < 1 || strlen(Book1 -> cAddr) < 1) {
		printf("�Է��� �ϳ��̻� �ƹ��� �Է��� ���� �ּҷϿ�  �������� �ʾҽ��ϴ�");
	} else {
		fsave = fopen(_FILE_, "w+");
		fwrite(Book1, rsize, 1, fsave);
		
		fclose(fsave);
	}
	
	system("pause"); // ȭ�� ���� ���� �ƹ�Ű�� ������ ���α׷� ���� 
}

//void SelTwo(int, struct data*); 
//void SelThree(int, struct data*); 
//void SelFour(int, struct data*); 
//void SelFive(int, struct data*); 

int Cnt_data(int rsize) { // 58
	int Cnt;
	FILE *fload = fopen(_FILE_, "r");
	
	if(fload == NULL) { // ���Ͽ� �ƹ� �ڷ� ���� �� 
		Cnt = 0;
	} else { // ���Ͽ� �ڷᰡ ���� �� 
		fseek(fload, -1, SEEK_END);
		
		// �ڷḦ ����ϱ� ���� ��ġ�� ��� �ش�
		Cnt = (ftell(fload)/ rsize) + 1; // ��ü �ο��� + 1
		fclose(fload); 
	}
	
	return Cnt;
}
