#include <stdio.h>
/*Q:Chef calls a number lucky if it contains the digit 7 at least once.
Given a number X, determine if it is a lucky number or not.*/
//Author: Rajdeep Singh Sidhu
//Date: 25-08-2023
int main(void) {
	// your code goes here
	int t;scanf("%d",&t);
	for(int i=0; i<t; i++){ int cheak=0;
	int x; scanf("%d", &x);
	    for(int i=1; x!=0; i++){
	       int k = x%10;
	       if(k==7){
	           cheak+=1;
	       }
	       x=x/10;
	    }
	    if(cheak!=0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

