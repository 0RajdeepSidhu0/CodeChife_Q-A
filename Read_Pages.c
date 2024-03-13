/*
Author: Rajdeep Singh Sidhu
Date: 27-02-23
*/

#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d\n", &t);
	for(int i=0; i<t; i++)
	{
	    int n ,x, y;
	    scanf("%d%d%d", &n,&x,&y);
	    x=x*y;
	    if(x>=n)
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

