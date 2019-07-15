#include <stdio.h>
#include <stdlib.h>

// 포인터의 포인터 

int main(int argc, char *argv[]) {
	char *month[] = {"january", "february", "march"};
	char ch = 'A';
	
	char *pch, **ppch;
	
	pch = &ch;
	ppch = &pch;
	
	printf("%c %c %c", ch, *pch, **ppch);
	
	return 0;
}
