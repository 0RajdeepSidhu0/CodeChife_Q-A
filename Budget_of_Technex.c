#include <stdio.h>
#include <stdlib.h>
//Author: Rajdeep Singh Sidhu
//date: 21-08-2023
int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0; i<t; i++){
	    int r; scanf("%d", &r); r=r*1000;r = r/2;
	    printf("%d\n", r/5);
	}
	return 0;
}

