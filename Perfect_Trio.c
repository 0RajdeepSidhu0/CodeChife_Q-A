#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//Date: 17-08-2023
int main(void) {
	
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0; i<t; i++){
	    int a,b,c; scanf("%d%d%d", &a,&b,&c);
	    if(a+b==c || b+c==a || a+c == b){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

