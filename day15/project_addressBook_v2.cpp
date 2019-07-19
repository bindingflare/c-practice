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

// ���� �κ� 
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
		Book2 = (struct data*)(malloc(Lec * sizeof(struct data))); 
		
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
			// �ּҷϿ� �߰� 
			system("cls");
			
			SelOne(rsize, Book1); // �Է��Լ� ȣ�� 
		} else if(cBtn == '2') {
			// �ּҷϿ� �˻� 
			if(Lec == 0) {
				printf("������ �����Ͱ� �����ϴ�");
				
				system("pause"); 
			} else {
				system("cls");
				
				SelTwo(rsize, Book2);
			}
		} else if(cBtn == '3') {
			// �ּҷ� ���� 
			if(Lec == 0) {
				printf("������ �����Ͱ� �����ϴ�");
				
				system("pause");
			} else {
				system("cls");
				
				SelThree(rsize, Book2);
			}
		} else if(cBtn == '4') {
			// �ּҷ� �Ϻ�/ ���� ���� 
			if(Lec == 0) {
				printf("������ �����Ͱ� �����ϴ�");
				
				system("pause");
			} else {
				system("cls");
				
				SelFour(rsize, Book2);
			}
		} else if(cBtn == '5') {
			// �ּҷ� ��ȸ 
			if(Lec == 0) {
				printf("��ȸ�� �����Ͱ� �����ϴ�");
				
				system("pause");
			} else {
				system("cls");
				
				SelFive(rsize, Book2);
			}
		} else if(cBtn == '0') {
			// ���� 
			printf("�����մϴ�");
			
			break;
		} else {
			printf("�ٽ��Է�\n");
			
			system("pause");
			
			continue; // �ݺ��� ������ 
		}
	}
	
	// malloc���� �޸� �Ҵ��� ���� �����ϱ�  
	free(Book1);
	free(Book2);
	
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
	
	printf("\n�ּ� [24�� �̳�]");
	gets(Book1 -> cAddr);
	
	if(strlen(Book1 -> cName) < 1 || strlen(Book1 -> cTel) < 1 || strlen(Book1 -> cAddr) < 1) {
		printf("�Է��� �ϳ��̻� �ƹ��� �Է��� ���� �ּҷϿ�  �������� �ʾҽ��ϴ�");
	} else {
		fsave = fopen(_FILE_, "a+");
		fwrite(Book1, rsize, 1, fsave);
		
		fclose(fsave);
	}
	
	system("pause"); // ȭ�� ���� ���� �ƹ�Ű�� ������ ���α׷� ���� 
}

void SelTwo(int rsize, struct data *Book2) {
	int count = Cnt_data(rsize);
	int queryNum;
	FILE *fload;
	
	printf("�� %d���� �����Ͱ� �ֽ��ϴ�\n", count); 
	
	printf("���° �����͸� ��ȸ�Ͻðڽ��ϱ�?: ");
	scanf("%d", &queryNum);
	
	// ���� ����, �O�������� ����ϱ�
	fload = fopen(_FILE_, "r+");
	fread(Book2, rsize, count, fload);
	
	int i;
	for(i = 0; i < count; i++) {
		if(queryNum - 1 == i) {
			printf("\n%d��° ������\n", queryNum);
			
			printf("  �� �� :\t%s\n", (Book2 + i) -> cName);
			printf("  ��ȭ��ȣ :\t%s\n", (Book2 + i) -> cTel);
			printf("  �� �� :\t%s\n", (Book2 + i) -> cAddr);			
		}
	}
	
	fclose(fload);
	
	system("pause");
} 

void SelThree(int rsize, struct data *Book2) {
	int queryNum;
	int count = Cnt_data(rsize); 
	FILE *fload; // �� ������ ������ ����,
	FILE *fsave; // �� ������ ������ ���� 
	
	printf("�� %d���� �����Ͱ� �ֽ��ϴ�", count);
	
	printf("\n���°�� �����͸� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &queryNum);
	
	// ���� ���� -> ���� �б� -> ��ġ�� ����
	fload = fopen(_FILE_, "r+");
	fread(Book2, rsize, count, fload);
	
	int i;
	for(i = 0; i < count; i++) {
		if(queryNum - 1 == i) {
			printf("\n%d ��° ����\n", queryNum);
			
			printf("  �� �� :\t%s\n", (Book2 + i) -> cName);
			printf("  ��ȭ��ȣ :\t%s\n", (Book2 + i) -> cTel);
			printf("  �� �� :\t%s\n", (Book2 + i) -> cAddr);
			
			fflush(stdin);
			
			// ���� ũ����
			printf("�� �� : ");
			gets((Book2 + i) -> cName);
			
			printf("\n��ȭ��ȣ : ");
			gets((Book2 + i) -> cTel);
			
			printf("\n�� �� : ");
			gets((Book2 + i) -> cAddr);
			
			if(strlen((Book2 + i) -> cName) < 1 || strlen((Book2 + i) -> cTel) < 1 || strlen((Book2 + i) -> cAddr) < 1) {
				printf("�Է��� �ϳ��̻� �ƹ��� �Է��� ���� �ּҷ��� �������� �ʽ��ϴ�");
				
				break; 
			}
			
			fsave = fopen(_FILE_, "w+");
			fwrite(Book2, rsize * count, 1, fsave);
			
			fclose(fsave);
			fclose(fload);
		}
	}
	
	// �Է��� �ּҷ� �� ����� ��� 
	if(fload != NULL) {
		printf("%d ��° ������ ��ã�ҽ��ϴ�. �ٽ� �޴��� ���� �Է����ּ���\n", queryNum);
		
		fclose(fload);
	}
	
	system("pause");
} 

void SelFour(int rsize, struct data *Book2) {
	int queryNum;
	int count = Cnt_data(rsize); 
	char cYN;
	FILE *fload; // �� ������ ������ ����,
	FILE *fsave; // �� ������ ������ ���� 
	
	printf("�� 1���� �����Ͱ� �ֽ��ϴ�\n", count);
	
	if(count == 1) {
		printf("1���� �����͸� �����ϹǷ� ������ �Ұ����մϴ�\n");
		
		fflush(stdin);
		
		printf("��� �����Ͻðڽ��ϱ�? (y/n) ");
		cYN = getchar();
		
		if(cYN == 'Y' || cYN == 'y') {
			_unlink(_FILE_);
		} else {
			printf("��ҵǾ����ϴ�\n");
		}
	} else {
		while(1) {
			printf("���° �����͸� �����Ͻðڽ��̴ϱ�? ");
			scanf("%d", &queryNum);
			
			if(queryNum <= count) break;
		}
			
		fload = fopen(_FILE_, "r+");
		fread(Book2, rsize, count, fload);

		int i, j = 0;
		for(i = 0; i < count; i++) {
			// Book2�� queryNum��°�� ���� ���� ������ ���� 
			if(i != queryNum - 1) {
				if(j == 0) fsave = fopen(_FILE_, "w+");
				else fsave = fopen(_FILE_, "a+");
				
			} else {
				fwrite(Book2 + i, rsize, 1, fsave);
				
				fclose(fsave);
				j++;
			}
		}
		
		printf("�����Ͻ� ���ڵ尡 �����Ǿ����ϴ�\n");
		
		fclose(fload);
	}
	
	system("pause");
} 

void SelFive(int rsize, struct data *Book2) {
	int count = Cnt_data(rsize);
	FILE *fload;
	
	printf("�� 1���� �����Ͱ� �ֽ��ϴ�\n", count);
	
	fload = fopen(_FILE_, "r+");
	fread(Book2, rsize, count, fload);
	
	int i;
	for(i = 0; i < count; i++) {
		printf("%d ��° ������\n", i);
		
		printf("  �� �� :\t%s\n", (Book2 + i) -> cName);
		printf("  ��ȭ��ȣ :\t%s\n", (Book2 + i) -> cTel);
		printf("  �� �� :\t%s\n", (Book2 + i) -> cAddr);
		
		printf("\n");
	}
	
	fclose(fload);
	
	system("pause");
}

int Cnt_data(int rsize) { // 58
	int Cnt;
	FILE *fload = fopen(_FILE_, "r");
	
	if(fload == NULL) { // ���Ͽ� �ƹ� �ڷ� ���� �� 
		Cnt = 0;
	} else { // ���Ͽ� �ڷᰡ ���� �� 
		fseek(fload, -1, SEEK_END);
		
		// �ڷḦ ����ϱ� ���� ��ġ�� ��� �ش�
		Cnt = (ftell(fload) / rsize) + 1; // ��ü �ο��� + 1
		fclose(fload); 
	}
	
	return Cnt;
}
