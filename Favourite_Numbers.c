#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//date: 4-08-2023
int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int a;
	    scanf("%d", &a);
	    if(a%2==0 && a%7==0){
	        printf("Alice\n");
	    }
	    else if(a%2!=0 && a%9==0){
	        printf("Bob\n");
	    }
	    else{
	        printf("Charli\n");
	    }
	
	}
	
	return 0;
}
