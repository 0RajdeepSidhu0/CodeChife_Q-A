#include <stdio.h>
//Date: 3-08-2023
int main(void) {
	// your code goes here
	int r,c,e;
	scanf("%d%d%d", &r, &c, &e);
	int x= r*c;
	x+=c*e;
	printf("%d", x);
	return 0;
}

