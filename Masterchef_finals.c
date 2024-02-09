#include <stdio.h>
/*
Author: Rajdeep Singh Sidhu
Date: 04-05-2023
*/
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x;
	    scanf("%d", &x);
	    if(x<=10)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

