#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>

#define _FILE_ "addrbook.dat"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 프로젝트 2 - Address Book 

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
	char cBtn; // 메뉴를 입력 받을 변수 
	int rsize = sizeof(struct data); // 58 byte
	
	struct data *Book1; // 구조체 포인터 변수 선언 
	struct data *Book2;
	
	printf("%d", rsize);
	
	while(1) {
		int Lec = Cnt_data(rsize); // 파일 열기, 인원수 
		Book1 = (struct data*)(malloc(1 * sizeof(struct data))); // 58
		Book2 - (struct data*)(malloc(Lec * sizeof(struct data))); 
		
		system("cls"); // 명령 프롬트 clear screen
		
		printf("구조체 크기 : %d\n", rsize);
		printf("데이터 갯수 : %d\n", Lec);
		
		if(Lec != 0) { // 1명이라도 주소록 지료가 있으면 
			printf("1. 자료입력\n");
			printf("2. 자료검색\n");
			printf("3. 자료수정\n");
			printf("4. 자료삭제\n");
			printf("5. 자료조회\n");
			printf("0. 종료\n");
			printf("선택하세요 : ");
			scanf("%c", &cBtn); 
		} else {
			cBtn = '1';
		}
		
		if(cBtn == '1') {
			// 입력
			system("cls");
			
			SelOne(rsize, Book1); // 입력함수 호출 
		} else if(cBtn == '2') {
			// 검색
		} else if(cBtn == '3') {
			// 수정 
		} else if(cBtn == '4') {
			// 삭제 
		} else if(cBtn == '5') {
			// 조회 
		} else if(cBtn == '0') {
			// 종료 
		} else {
			printf("다시입력\n");
			continue; // 반복의 끝으로 
		}
	}
	
	return 0;
}

// 인원 수 계산 
void SelOne(int rsize, struct data *Book1) {
	//  입력받아 구조체에 넣기 
	// 파일 열고 새정보를 쓰고 파일 닫기 
	FILE *fsave;
	
	//파일열고 입력 받아 파일에 쓰고 파일을 담기
	fflush(stdin); // 입출력시 사용되는 버퍼의 자료를 지우기
	
	printf("\n이름 [8자 이내] : ");
	gets(Book1 -> cName); 
	 
	printf("\n전화번호 [16자 이내] : ");
	gets(Book1 -> cTel); 
	
	printf("\n 주소 [24자 이내]");
	gets(Book1 -> cAddr);
	
	if(strlen(Book1 -> cName) < 1 || strlen(Book1 -> cTel) < 1 || strlen(Book1 -> cAddr) < 1) {
		printf("입력중 하나이상 아물런 입력이 없어 주소록에  저장하지 않았습니다");
	} else {
		fsave = fopen(_FILE_, "w+");
		fwrite(Book1, rsize, 1, fsave);
		
		fclose(fsave);
	}
	
	system("pause"); // 화면 진행 멈춤 아무키나 누르면 프로그램 진행 
}

//void SelTwo(int, struct data*); 
//void SelThree(int, struct data*); 
//void SelFour(int, struct data*); 
//void SelFive(int, struct data*); 

int Cnt_data(int rsize) { // 58
	int Cnt;
	FILE *fload = fopen(_FILE_, "r");
	
	if(fload == NULL) { // 파일에 아무 자료 없을 때 
		Cnt = 0;
	} else { // 파일에 자료가 있을 때 
		fseek(fload, -1, SEEK_END);
		
		// 자료를 사용하기 위해 위치를 잡아 준다
		Cnt = (ftell(fload)/ rsize) + 1; // 전체 인원수 + 1
		fclose(fload); 
	}
	
	return Cnt;
}
