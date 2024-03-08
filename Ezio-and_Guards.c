#include <stdio.h>

/*
Problem:
Ezio can manipulate at most X number of guards with the apple of eden.
Given that there are Y number of guards, predict if he can safely manipulate all of them.
*/
//Author: Rajdeep Singh Sidhu
//Date: 21-06-2023
int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    scanf("%d%d", &x,&y);
	    if(x>=y)
	    {
	        printf("YES\n");
	        
	    }
	    else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

