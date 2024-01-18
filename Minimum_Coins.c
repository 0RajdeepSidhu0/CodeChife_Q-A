#include <stdio.h>

/*
Author: Rajdeep Singh Sidhu
Date: 3-05-2023
*/
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x; scanf("%d", &x);
	    if(x>=10)
	    {
	        x = x%10;
	        printf("%d\n", x);
	    }
	    else if(x>0 && x<10)
	    {
	        printf("%d\n", x);
	    }
	    
	}
	return 0;
}

