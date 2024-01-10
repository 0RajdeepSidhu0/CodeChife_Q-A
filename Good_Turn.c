#include <stdio.h>
#include <malloc.h>
//Author: Rajdeep Singh Sidhu
//Date: 14-05-2023
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y;
	    scanf("%d%d", &x,&y);
	    x=x+y;
	    if(x>6)
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

