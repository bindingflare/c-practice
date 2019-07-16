#include <stdio.h>
#include <stdlib.h>

// 포인터의 포인터
// 배열 포인터의 포인터 

int main(int argc, char *argv[]) {
	char *month[] = {"january", "february", "march"};
	char ch = 'A';
	
	char *pch, **ppch;
	
	pch = &ch;
	ppch = &pch;
	
	printf("%c %c %c\n", ch, *pch, **ppch);
	
	ppch = month;
	
	printf("%s %s %s\n", **(ppch + 1)); 
	
	return 0;
}
