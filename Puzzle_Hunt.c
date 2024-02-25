#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//Date: 05-08-2023
int main(void) {
	
	// your code goes here
	int n;scanf("%d", &n);
	if(n%6==0 || n%7 == 0 || n%8==0){
	    printf("YES");
	}
	else{
	    printf("NO");
	}
	return 0;
}

