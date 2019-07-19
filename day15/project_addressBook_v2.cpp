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

// 선언 부분 
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
		Book2 = (struct data*)(malloc(Lec * sizeof(struct data))); 
		
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
			// 주소록에 추가 
			system("cls");
			
			SelOne(rsize, Book1); // 입력함수 호출 
		} else if(cBtn == '2') {
			// 주소록에 검색 
			if(Lec == 0) {
				printf("겈색할 데이터가 없습니다");
				
				system("pause"); 
			} else {
				system("cls");
				
				SelTwo(rsize, Book2);
			}
		} else if(cBtn == '3') {
			// 주소록 수정 
			if(Lec == 0) {
				printf("수정할 데이터가 없습니다");
				
				system("pause");
			} else {
				system("cls");
				
				SelThree(rsize, Book2);
			}
		} else if(cBtn == '4') {
			// 주소록 일부/ 전부 삭제 
			if(Lec == 0) {
				printf("삭제할 데이터가 없습니다");
				
				system("pause");
			} else {
				system("cls");
				
				SelFour(rsize, Book2);
			}
		} else if(cBtn == '5') {
			// 주소록 조회 
			if(Lec == 0) {
				printf("조회할 데이터가 없습니다");
				
				system("pause");
			} else {
				system("cls");
				
				SelFive(rsize, Book2);
			}
		} else if(cBtn == '0') {
			// 종료 
			printf("종료합니다");
			
			break;
		} else {
			printf("다시입력\n");
			
			system("pause");
			
			continue; // 반복의 끝으로 
		}
	}
	
	// malloc으로 메모리 할당한 것을 해제하기  
	free(Book1);
	free(Book2);
	
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
	
	printf("\n주소 [24자 이내]");
	gets(Book1 -> cAddr);
	
	if(strlen(Book1 -> cName) < 1 || strlen(Book1 -> cTel) < 1 || strlen(Book1 -> cAddr) < 1) {
		printf("입력중 하나이상 아무런 입력이 없어 주소록에  저장하지 않았습니다");
	} else {
		fsave = fopen(_FILE_, "a+");
		fwrite(Book1, rsize, 1, fsave);
		
		fclose(fsave);
	}
	
	system("pause"); // 화면 진행 멈춤 아무키나 누르면 프로그램 진행 
}

void SelTwo(int rsize, struct data *Book2) {
	int count = Cnt_data(rsize);
	int queryNum;
	FILE *fload;
	
	printf("총 %d명의 데이터가 있습니다\n", count); 
	
	printf("몇번째 데이터를 조회하시겠습니까?: ");
	scanf("%d", &queryNum);
	
	// 파일 열고, 찿은다음에 출력하기
	fload = fopen(_FILE_, "r+");
	fread(Book2, rsize, count, fload);
	
	int i;
	for(i = 0; i < count; i++) {
		if(queryNum - 1 == i) {
			printf("\n%d번째 데이터\n", queryNum);
			
			printf("  이 름 :\t%s\n", (Book2 + i) -> cName);
			printf("  전화번호 :\t%s\n", (Book2 + i) -> cTel);
			printf("  주 소 :\t%s\n", (Book2 + i) -> cAddr);			
		}
	}
	
	fclose(fload);
	
	system("pause");
} 

void SelThree(int rsize, struct data *Book2) {
	int queryNum;
	int count = Cnt_data(rsize); 
	FILE *fload; // 이 포인터 변수로 열고,
	FILE *fsave; // 이 포인터 변수로 수정 
	
	printf("총 %d개의 데이터가 있습니다", count);
	
	printf("\n몇번째의 데이터를 수정하시겠습니까? ");
	scanf("%d", &queryNum);
	
	// 파일 열기 -> 파일 읽기 -> 고치고 저장
	fload = fopen(_FILE_, "r+");
	fread(Book2, rsize, count, fload);
	
	int i;
	for(i = 0; i < count; i++) {
		if(queryNum - 1 == i) {
			printf("\n%d 번째 데이\n", queryNum);
			
			printf("  이 름 :\t%s\n", (Book2 + i) -> cName);
			printf("  전화번호 :\t%s\n", (Book2 + i) -> cTel);
			printf("  주 소 :\t%s\n", (Book2 + i) -> cAddr);
			
			fflush(stdin);
			
			// 버퍼 크리어
			printf("이 름 : ");
			gets((Book2 + i) -> cName);
			
			printf("\n전화번호 : ");
			gets((Book2 + i) -> cTel);
			
			printf("\n주 소 : ");
			gets((Book2 + i) -> cAddr);
			
			if(strlen((Book2 + i) -> cName) < 1 || strlen((Book2 + i) -> cTel) < 1 || strlen((Book2 + i) -> cAddr) < 1) {
				printf("입력중 하나이상 아무런 입력이 없어 주소록을 수정하지 않습니다");
				
				break; 
			}
			
			fsave = fopen(_FILE_, "w+");
			fwrite(Book2, rsize * count, 1, fsave);
			
			fclose(fsave);
			fclose(fload);
		}
	}
	
	// 입력이 주소록 수 벗어나면 출력 
	if(fload != NULL) {
		printf("%d 번째 데이터 못찾았습니다. 다시 메뉴를 통해 입력해주세요\n", queryNum);
		
		fclose(fload);
	}
	
	system("pause");
} 

void SelFour(int rsize, struct data *Book2) {
	int queryNum;
	int count = Cnt_data(rsize); 
	char cYN;
	FILE *fload; // 이 포인터 변수로 열고,
	FILE *fsave; // 이 포인터 변수로 수정 
	
	printf("총 1개의 데이터가 있습니다\n", count);
	
	if(count == 1) {
		printf("1개의 데이터만 존재하므로 삭제가 불가능합니다\n");
		
		fflush(stdin);
		
		printf("모두 삭제하시겠습니까? (y/n) ");
		cYN = getchar();
		
		if(cYN == 'Y' || cYN == 'y') {
			_unlink(_FILE_);
		} else {
			printf("취소되었습니다\n");
		}
	} else {
		while(1) {
			printf("몇번째 데이터를 삭제하시겠습겁니까? ");
			scanf("%d", &queryNum);
			
			if(queryNum <= count) break;
		}
			
		fload = fopen(_FILE_, "r+");
		fread(Book2, rsize, count, fload);

		int i, j = 0;
		for(i = 0; i < count; i++) {
			// Book2의 queryNum번째의 값만 빼고 나머지 복사 
			if(i != queryNum - 1) {
				if(j == 0) fsave = fopen(_FILE_, "w+");
				else fsave = fopen(_FILE_, "a+");
				
			} else {
				fwrite(Book2 + i, rsize, 1, fsave);
				
				fclose(fsave);
				j++;
			}
		}
		
		printf("선택하신 레코드가 삭제되었습니다\n");
		
		fclose(fload);
	}
	
	system("pause");
} 

void SelFive(int rsize, struct data *Book2) {
	int count = Cnt_data(rsize);
	FILE *fload;
	
	printf("총 1개의 데이터가 있습니다\n", count);
	
	fload = fopen(_FILE_, "r+");
	fread(Book2, rsize, count, fload);
	
	int i;
	for(i = 0; i < count; i++) {
		printf("%d 번째 데이터\n", i);
		
		printf("  이 름 :\t%s\n", (Book2 + i) -> cName);
		printf("  전화번호 :\t%s\n", (Book2 + i) -> cTel);
		printf("  주 소 :\t%s\n", (Book2 + i) -> cAddr);
		
		printf("\n");
	}
	
	fclose(fload);
	
	system("pause");
}

int Cnt_data(int rsize) { // 58
	int Cnt;
	FILE *fload = fopen(_FILE_, "r");
	
	if(fload == NULL) { // 파일에 아무 자료 없을 때 
		Cnt = 0;
	} else { // 파일에 자료가 있을 때 
		fseek(fload, -1, SEEK_END);
		
		// 자료를 사용하기 위해 위치를 잡아 준다
		Cnt = (ftell(fload) / rsize) + 1; // 전체 인원수 + 1
		fclose(fload); 
	}
	
	return Cnt;
}
