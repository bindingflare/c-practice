#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Snail problem

//int getSnailDaysTaken(int dayRise, int nightFall, int targetDistance) {
//	int currentDistance = 0;
//	int daysTaken = 0;
//	
//	while(currentDistance < targetDistance) {
//		currentDistance += dayRise - nightFall;
//		daysTaken++;
//	}
//	
//	return daysTaken;
//}
//
//int main(int argc, char *argv[]) {
//	int days = getSnailDaysTaken(5, 3, 50);
//
//	printf("%d days taken by snail", days);
//	
//	return 0;
//}

// Average marks

int findAverage (int num1, int num2, int num3) {
	int sum = num1 + num2 + num3;
	
	return sum /3;
}


int main(int argc, char *argv[]) {
	int maths, english, korean;
	
	printf("수학 점수 입력:");
	scanf("%d", &maths);
	
	printf("영어 점수 입력:");
	scanf("%d", &english);
	
	printf("국어 점수 입력:");
	scanf(" %d", &korean);
	
	printf("평균 %d \점", findAverage(maths, english, korean));
	
	return 0;
}
