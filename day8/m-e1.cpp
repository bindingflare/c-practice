#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 배열 sorting 

//int main(int argc, char *argv[]) {
//	int i;
//	int number[10] = {15,2,8,44,100,8,2,3,1};
//	
////	for(i = 1; i <= 10; i++) {
////		printf("%d번째 숫자 입력\n", i);
////		scanf("%d", &number[i-1]); 
////		}
//	
////	// Selection sort
////	for(i = 0; i < 10; i++) {
////		int j;
////		
////		for(j = 0; j < i - 1; j++) {
////			if(number[i] < number[j]) {
////				int temp = number[i];
////				number[i] = number[j];
////				number[j] = temp;
////			}
////		}
////	}
//	
//	// Insertion sort
//	for(i = 0; i < 10; i++) {
//		int j, k;
//		
//		for(j = i + 1; j < 10; j++) {
//			if(number[i] > number[j]) {
//				int temp = number[i];
//				number[i] = number[j];
//				number[j] = temp;
//			}
//		}
//		
//		printf("\n");
//		printf("%d 단계: ", i + 1);
//		
//		for(k = 0; k < 10; k++) {
//			printf("%d\t", number[k]);
//		}
//	}
//	
//	printf("\n");
//	printf("마지막 단계: ");
//	
//	for(i = 0; i < 10; i++) {
//		printf("%d\t", number[i]);
//	}
//	
//	return 0;
//}

//int main(int argc, char *argv[]) {
//	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
//	// 배열명은 상수 포인터
//	
//	printf("%d %d \n", arr[0], arr[1]);
//	printf("%d %d %d\n", &arr[0], &arr[1], &arr[2]); // int는 4 byte -> 메모리 4 차이
//	
//	printf("%d \n", arr); // 배열명은 배열의 0요소의 주소의 값이다 
//	printf("%d %d \n", *arr, *(&arr[1]));
//	
//	// 50을 주소를 출력하고 값을 출력
//	printf("%d %d \n", &arr[4], *&arr[4]);
//	
//	return 0;
//}

// 배열 초기값 

// 문자의 초기값이 없으면 기본으로 '\u1000' 

//int main(int argc, char *argv[]) {
//	char str1[15] = "Good"; // 예시 1 
//	char str2[15] = {'G','o','o','d'}; // 예시 2 
//	char str3[] = "morning"; // 예시 1 의 alternative 
//	
//	char str4[15];
//	str4[0] = 'G';
//	str4[1] = 'o';
//	str4[2] = 'o';
//	str4[3] = 'd';
//	
//	int i;
//	
//	for(i = 0; i < 15; i++) {
//		printf("%c", str1[i]);
//	}
//	printf("%d");
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("%s\n", str3); 
//	printf("%s\n", str4);
//	
//	return 0;
//}

int main(int argc, char *argv[]) {
	char name[15] = "Jung Hyun Hee";
	int age[1] = {30};
	char city[] = "Seoul Guro-Gu Sindorim-Dong Gyeonggi-Do";
	
	printf("Name:\t%s\n", name);
	printf("Age:\t%d\n", *age);
	printf("City:\t%s\n", city);
	printf("\n");
	
	char familyName[15];
	int familyNameCount = 0;
	
	char firstName[15];
	int firstNameCount = 0;
	
	int i = 0;
	for(i = 0; i < 15; i++) {
		if(name[i] == ' ') {
			break;
		}
		
		familyName[familyNameCount] = name[i];
		familyNameCount++;
	} 
	
	for(i = i + 1; i < 15; i++) {
		firstName[firstNameCount] = name[i];
		firstNameCount++;
	}
	
	char cityName[15];
	int cityNameCount = 0;
	
	char stateName[15];
	int stateNameCount = 0;
	
	int foundLoc;
	
	for(i = 0; i < 50; i++) {
		if(city[i] == ' ') {
			foundLoc = i;
			i = 50;
		} else {
			cityName[cityNameCount] = city[i];
			cityNameCount++;
		}
	}
	
	for(i = foundLoc + 1; i < 50; i++) {
		if(city[i] == ' ') {
			foundLoc = i;
			i = 50;
		} else {
			// Do nothing
		}
	}
	
	for(i = foundLoc + 1; i < 50; i++) {
		if(city[i] == ' ') {
			foundLoc = i;
			i = 50;
		} else {
			// Do nothing
		}
	}
	
	for(i = foundLoc + 1; i < 50; i++) {
		if(city[i] == ' ') {
			foundLoc = i;
			i = 50;
		} else {
			stateName[stateNameCount] = city[i];
			stateNameCount++;
		}
	}
	
	printf("당신의 성은 %s이고 이름은 %s입니다\n", familyName, firstName);
	printf("그리고 당신은 %s, %s 에 거주하고있다", cityName, stateName);
	
	return 0;
}
