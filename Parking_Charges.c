#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//Date: 29-05-2023
int main(void) {
	// your code goes here
	int x,y,h;
	scanf("%d%d%d", &x,&y,&h);
	h-=1;
	y=y*h;
	printf("%d", x+y);
	return 0;
}

